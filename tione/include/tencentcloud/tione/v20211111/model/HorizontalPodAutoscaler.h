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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_HORIZONTALPODAUTOSCALER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_HORIZONTALPODAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Option.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * hpa的描述
                */
                class HorizontalPodAutoscaler : public AbstractModel
                {
                public:
                    HorizontalPodAutoscaler();
                    ~HorizontalPodAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinReplicas 最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minReplicas 最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxReplicas 最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxReplicas 最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取支持：
"gpu-util": GPU利用率。范围{10, 100}      "cpu-util": CPU利用率。范围{10, 100}	      "memory-util": 内存利用率。范围{10, 100}      "service-qps": 单个实例QPS值。范围{1, 5000}
"concurrency-util":单个实例请求数量值。范围{1,100000}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HpaMetrics 支持：
"gpu-util": GPU利用率。范围{10, 100}      "cpu-util": CPU利用率。范围{10, 100}	      "memory-util": 内存利用率。范围{10, 100}      "service-qps": 单个实例QPS值。范围{1, 5000}
"concurrency-util":单个实例请求数量值。范围{1,100000}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Option> GetHpaMetrics() const;

                    /**
                     * 设置支持：
"gpu-util": GPU利用率。范围{10, 100}      "cpu-util": CPU利用率。范围{10, 100}	      "memory-util": 内存利用率。范围{10, 100}      "service-qps": 单个实例QPS值。范围{1, 5000}
"concurrency-util":单个实例请求数量值。范围{1,100000}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hpaMetrics 支持：
"gpu-util": GPU利用率。范围{10, 100}      "cpu-util": CPU利用率。范围{10, 100}	      "memory-util": 内存利用率。范围{10, 100}      "service-qps": 单个实例QPS值。范围{1, 5000}
"concurrency-util":单个实例请求数量值。范围{1,100000}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHpaMetrics(const std::vector<Option>& _hpaMetrics);

                    /**
                     * 判断参数 HpaMetrics 是否已赋值
                     * @return HpaMetrics 是否已赋值
                     * 
                     */
                    bool HpaMetricsHasBeenSet() const;

                    /**
                     * 获取扩容观察期，单位秒
                     * @return ScaleUpStabilizationWindowSeconds 扩容观察期，单位秒
                     * 
                     */
                    int64_t GetScaleUpStabilizationWindowSeconds() const;

                    /**
                     * 设置扩容观察期，单位秒
                     * @param _scaleUpStabilizationWindowSeconds 扩容观察期，单位秒
                     * 
                     */
                    void SetScaleUpStabilizationWindowSeconds(const int64_t& _scaleUpStabilizationWindowSeconds);

                    /**
                     * 判断参数 ScaleUpStabilizationWindowSeconds 是否已赋值
                     * @return ScaleUpStabilizationWindowSeconds 是否已赋值
                     * 
                     */
                    bool ScaleUpStabilizationWindowSecondsHasBeenSet() const;

                    /**
                     * 获取缩容观察期，单位秒
                     * @return ScaleDownStabilizationWindowSeconds 缩容观察期，单位秒
                     * 
                     */
                    int64_t GetScaleDownStabilizationWindowSeconds() const;

                    /**
                     * 设置缩容观察期，单位秒
                     * @param _scaleDownStabilizationWindowSeconds 缩容观察期，单位秒
                     * 
                     */
                    void SetScaleDownStabilizationWindowSeconds(const int64_t& _scaleDownStabilizationWindowSeconds);

                    /**
                     * 判断参数 ScaleDownStabilizationWindowSeconds 是否已赋值
                     * @return ScaleDownStabilizationWindowSeconds 是否已赋值
                     * 
                     */
                    bool ScaleDownStabilizationWindowSecondsHasBeenSet() const;

                private:

                    /**
                     * 最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 最大实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 支持：
"gpu-util": GPU利用率。范围{10, 100}      "cpu-util": CPU利用率。范围{10, 100}	      "memory-util": 内存利用率。范围{10, 100}      "service-qps": 单个实例QPS值。范围{1, 5000}
"concurrency-util":单个实例请求数量值。范围{1,100000}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Option> m_hpaMetrics;
                    bool m_hpaMetricsHasBeenSet;

                    /**
                     * 扩容观察期，单位秒
                     */
                    int64_t m_scaleUpStabilizationWindowSeconds;
                    bool m_scaleUpStabilizationWindowSecondsHasBeenSet;

                    /**
                     * 缩容观察期，单位秒
                     */
                    int64_t m_scaleDownStabilizationWindowSeconds;
                    bool m_scaleDownStabilizationWindowSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_HORIZONTALPODAUTOSCALER_H_
