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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLEMATRIX_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLEMATRIX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/SampleStream.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 指标矩阵，可包含多条指标序列
                */
                class CustomSampleMatrix : public AbstractModel
                {
                public:
                    CustomSampleMatrix();
                    ~CustomSampleMatrix() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名字
                     * @return Metric 指标名字
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名字
                     * @param _metric 指标名字
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
                     * 获取聚合函数
                     * @return Aggregation 聚合函数
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置聚合函数
                     * @param _aggregation 聚合函数
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                    /**
                     * 获取指标单位
                     * @return Unit 指标单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置指标单位
                     * @param _unit 指标单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取指标序列数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Streams 指标序列数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SampleStream> GetStreams() const;

                    /**
                     * 设置指标序列数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streams 指标序列数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreams(const std::vector<SampleStream>& _streams);

                    /**
                     * 判断参数 Streams 是否已赋值
                     * @return Streams 是否已赋值
                     * 
                     */
                    bool StreamsHasBeenSet() const;

                    /**
                     * 获取两个时间点的时间间隔，单位纳秒
                     * @return Step 两个时间点的时间间隔，单位纳秒
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置两个时间点的时间间隔，单位纳秒
                     * @param _step 两个时间点的时间间隔，单位纳秒
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * 指标名字
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 聚合函数
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * 指标单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 指标序列数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SampleStream> m_streams;
                    bool m_streamsHasBeenSet;

                    /**
                     * 两个时间点的时间间隔，单位纳秒
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CUSTOMSAMPLEMATRIX_H_
