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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_STATISTICITEM_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_STATISTICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 累计用量封顶的配置
                */
                class StatisticItem : public AbstractModel
                {
                public:
                    StatisticItem();
                    ~StatisticItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封顶类型，累计用量total，瞬时用量moment
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 封顶类型，累计用量total，瞬时用量moment
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置封顶类型，累计用量total，瞬时用量moment
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 封顶类型，累计用量total，瞬时用量moment
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取自动解封时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnBlockTime 自动解封时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUnBlockTime() const;

                    /**
                     * 设置自动解封时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unBlockTime 自动解封时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnBlockTime(const uint64_t& _unBlockTime);

                    /**
                     * 判断参数 UnBlockTime 是否已赋值
                     * @return UnBlockTime 是否已赋值
                     * 
                     */
                    bool UnBlockTimeHasBeenSet() const;

                    /**
                     * 获取带宽、流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BpsThreshold 带宽、流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBpsThreshold() const;

                    /**
                     * 设置带宽、流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bpsThreshold 带宽、流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBpsThreshold(const uint64_t& _bpsThreshold);

                    /**
                     * 判断参数 BpsThreshold 是否已赋值
                     * @return BpsThreshold 是否已赋值
                     * 
                     */
                    bool BpsThresholdHasBeenSet() const;

                    /**
                     * 获取关闭方式 返回404:RETURN_404
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CounterMeasure 关闭方式 返回404:RETURN_404
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCounterMeasure() const;

                    /**
                     * 设置关闭方式 返回404:RETURN_404
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _counterMeasure 关闭方式 返回404:RETURN_404
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCounterMeasure(const std::string& _counterMeasure);

                    /**
                     * 判断参数 CounterMeasure 是否已赋值
                     * @return CounterMeasure 是否已赋值
                     * 
                     */
                    bool CounterMeasureHasBeenSet() const;

                    /**
                     * 获取触发提醒阈值百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertPercentage 触发提醒阈值百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlertPercentage() const;

                    /**
                     * 设置触发提醒阈值百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertPercentage 触发提醒阈值百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertPercentage(const uint64_t& _alertPercentage);

                    /**
                     * 判断参数 AlertPercentage 是否已赋值
                     * @return AlertPercentage 是否已赋值
                     * 
                     */
                    bool AlertPercentageHasBeenSet() const;

                    /**
                     * 获取累计用量封顶告警配置，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertSwitch 累计用量封顶告警配置，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlertSwitch() const;

                    /**
                     * 设置累计用量封顶告警配置，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertSwitch 累计用量封顶告警配置，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertSwitch(const std::string& _alertSwitch);

                    /**
                     * 判断参数 AlertSwitch 是否已赋值
                     * @return AlertSwitch 是否已赋值
                     * 
                     */
                    bool AlertSwitchHasBeenSet() const;

                    /**
                     * 获取指标类型，流量flux或带宽bandwidth
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metric 指标类型，流量flux或带宽bandwidth
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标类型，流量flux或带宽bandwidth
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metric 指标类型，流量flux或带宽bandwidth
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取检测周期，单位分钟，60或1440
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cycle 检测周期，单位分钟，60或1440
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCycle() const;

                    /**
                     * 设置检测周期，单位分钟，60或1440
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycle 检测周期，单位分钟，60或1440
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycle(const uint64_t& _cycle);

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取累计用量封顶配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 累计用量封顶配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置累计用量封顶配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 累计用量封顶配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 封顶类型，累计用量total，瞬时用量moment
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自动解封时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_unBlockTime;
                    bool m_unBlockTimeHasBeenSet;

                    /**
                     * 带宽、流量阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bpsThreshold;
                    bool m_bpsThresholdHasBeenSet;

                    /**
                     * 关闭方式 返回404:RETURN_404
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_counterMeasure;
                    bool m_counterMeasureHasBeenSet;

                    /**
                     * 触发提醒阈值百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alertPercentage;
                    bool m_alertPercentageHasBeenSet;

                    /**
                     * 累计用量封顶告警配置，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertSwitch;
                    bool m_alertSwitchHasBeenSet;

                    /**
                     * 指标类型，流量flux或带宽bandwidth
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 检测周期，单位分钟，60或1440
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * 累计用量封顶配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_STATISTICITEM_H_
