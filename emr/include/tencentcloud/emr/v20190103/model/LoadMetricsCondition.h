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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TriggerCondition.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 负载指标条件
                */
                class LoadMetricsCondition : public AbstractModel
                {
                public:
                    LoadMetricsCondition();
                    ~LoadMetricsCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则统计周期，提供1min,3min,5min。
                     * @return StatisticPeriod 规则统计周期，提供1min,3min,5min。
                     * 
                     */
                    int64_t GetStatisticPeriod() const;

                    /**
                     * 设置规则统计周期，提供1min,3min,5min。
                     * @param _statisticPeriod 规则统计周期，提供1min,3min,5min。
                     * 
                     */
                    void SetStatisticPeriod(const int64_t& _statisticPeriod);

                    /**
                     * 判断参数 StatisticPeriod 是否已赋值
                     * @return StatisticPeriod 是否已赋值
                     * 
                     */
                    bool StatisticPeriodHasBeenSet() const;

                    /**
                     * 获取触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。
                     * @return TriggerThreshold 触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。
                     * 
                     */
                    int64_t GetTriggerThreshold() const;

                    /**
                     * 设置触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。
                     * @param _triggerThreshold 触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。
                     * 
                     */
                    void SetTriggerThreshold(const int64_t& _triggerThreshold);

                    /**
                     * 判断参数 TriggerThreshold 是否已赋值
                     * @return TriggerThreshold 是否已赋值
                     * 
                     */
                    bool TriggerThresholdHasBeenSet() const;

                    /**
                     * 获取扩缩容负载指标。
                     * @return LoadMetrics 扩缩容负载指标。
                     * 
                     */
                    std::string GetLoadMetrics() const;

                    /**
                     * 设置扩缩容负载指标。
                     * @param _loadMetrics 扩缩容负载指标。
                     * 
                     */
                    void SetLoadMetrics(const std::string& _loadMetrics);

                    /**
                     * 判断参数 LoadMetrics 是否已赋值
                     * @return LoadMetrics 是否已赋值
                     * 
                     */
                    bool LoadMetricsHasBeenSet() const;

                    /**
                     * 获取规则元数据记录ID。
                     * @return MetricId 规则元数据记录ID。
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置规则元数据记录ID。
                     * @param _metricId 规则元数据记录ID。
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TriggerCondition> GetConditions() const;

                    /**
                     * 设置触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<TriggerCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * 规则统计周期，提供1min,3min,5min。
                     */
                    int64_t m_statisticPeriod;
                    bool m_statisticPeriodHasBeenSet;

                    /**
                     * 触发次数，当连续触发超过TriggerThreshold次后才开始扩缩容。
                     */
                    int64_t m_triggerThreshold;
                    bool m_triggerThresholdHasBeenSet;

                    /**
                     * 扩缩容负载指标。
                     */
                    std::string m_loadMetrics;
                    bool m_loadMetricsHasBeenSet;

                    /**
                     * 规则元数据记录ID。
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TriggerCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADMETRICSCONDITION_H_
