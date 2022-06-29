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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGDATA_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CustomTrainingMetric.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 自定义指标
                */
                class CustomTrainingData : public AbstractModel
                {
                public:
                    CustomTrainingData();
                    ~CustomTrainingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics 指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomTrainingMetric> GetMetrics() const;

                    /**
                     * 设置指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Metrics 指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetrics(const std::vector<CustomTrainingMetric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomTrainingMetric> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGDATA_H_
