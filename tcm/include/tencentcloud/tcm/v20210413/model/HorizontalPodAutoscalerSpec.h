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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_HORIZONTALPODAUTOSCALERSPEC_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_HORIZONTALPODAUTOSCALERSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/MetricSpec.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * HPA 配置
                */
                class HorizontalPodAutoscalerSpec : public AbstractModel
                {
                public:
                    HorizontalPodAutoscalerSpec();
                    ~HorizontalPodAutoscalerSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小副本数
                     * @return MinReplicas 最小副本数
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置最小副本数
                     * @param _minReplicas 最小副本数
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
                     * 获取最大副本数
                     * @return MaxReplicas 最大副本数
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大副本数
                     * @param _maxReplicas 最大副本数
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
                     * 获取用于计算副本数的指标
                     * @return Metrics 用于计算副本数的指标
                     * 
                     */
                    std::vector<MetricSpec> GetMetrics() const;

                    /**
                     * 设置用于计算副本数的指标
                     * @param _metrics 用于计算副本数的指标
                     * 
                     */
                    void SetMetrics(const std::vector<MetricSpec>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * 最小副本数
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 最大副本数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 用于计算副本数的指标
                     */
                    std::vector<MetricSpec> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_HORIZONTALPODAUTOSCALERSPEC_H_
