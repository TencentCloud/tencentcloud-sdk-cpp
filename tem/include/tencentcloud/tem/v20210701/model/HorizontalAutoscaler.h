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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 弹性伸缩策略
                */
                class HorizontalAutoscaler : public AbstractModel
                {
                public:
                    HorizontalAutoscaler();
                    ~HorizontalAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小实例数（可以不传）
                     * @return MinReplicas 最小实例数（可以不传）
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置最小实例数（可以不传）
                     * @param MinReplicas 最小实例数（可以不传）
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取最大实例数（可以不传）
                     * @return MaxReplicas 最大实例数（可以不传）
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大实例数（可以不传）
                     * @param MaxReplicas 最大实例数（可以不传）
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取指标度量（CPU or MEMORY）
                     * @return Metrics 指标度量（CPU or MEMORY）
                     */
                    std::string GetMetrics() const;

                    /**
                     * 设置指标度量（CPU or MEMORY）
                     * @param Metrics 指标度量（CPU or MEMORY）
                     */
                    void SetMetrics(const std::string& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取阈值（百分比）
                     * @return Threshold 阈值（百分比）
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置阈值（百分比）
                     * @param Threshold 阈值（百分比）
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param Enabled 是否启用
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 最小实例数（可以不传）
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 最大实例数（可以不传）
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 指标度量（CPU or MEMORY）
                     */
                    std::string m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 阈值（百分比）
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_HORIZONTALAUTOSCALER_H_
