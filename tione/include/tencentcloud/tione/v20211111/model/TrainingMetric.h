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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMETRIC_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/TrainingDataPoint.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 训练指标
                */
                class TrainingMetric : public AbstractModel
                {
                public:
                    TrainingMetric();
                    ~TrainingMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param MetricName 指标名
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 数据值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> GetValues() const;

                    /**
                     * 设置数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Values 数据值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValues(const std::vector<TrainingDataPoint>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取上报的Epoch. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Epochs 上报的Epoch. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> GetEpochs() const;

                    /**
                     * 设置上报的Epoch. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Epochs 上报的Epoch. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEpochs(const std::vector<TrainingDataPoint>& _epochs);

                    /**
                     * 判断参数 Epochs 是否已赋值
                     * @return Epochs 是否已赋值
                     */
                    bool EpochsHasBeenSet() const;

                    /**
                     * 获取上报的Step. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Steps 上报的Step. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> GetSteps() const;

                    /**
                     * 设置上报的Step. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Steps 上报的Step. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSteps(const std::vector<TrainingDataPoint>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取上报的TotalSteps. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSteps 上报的TotalSteps. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> GetTotalSteps() const;

                    /**
                     * 设置上报的TotalSteps. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalSteps 上报的TotalSteps. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalSteps(const std::vector<TrainingDataPoint>& _totalSteps);

                    /**
                     * 判断参数 TotalSteps 是否已赋值
                     * @return TotalSteps 是否已赋值
                     */
                    bool TotalStepsHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 数据值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 上报的Epoch. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> m_epochs;
                    bool m_epochsHasBeenSet;

                    /**
                     * 上报的Step. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * 上报的TotalSteps. 可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingDataPoint> m_totalSteps;
                    bool m_totalStepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGMETRIC_H_
