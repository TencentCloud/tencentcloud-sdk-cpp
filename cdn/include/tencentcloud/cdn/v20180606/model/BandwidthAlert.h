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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/StatisticItem.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 带宽封顶配置，默认为关闭状态
                */
                class BandwidthAlert : public AbstractModel
                {
                public:
                    BandwidthAlert();
                    ~BandwidthAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用量封顶配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 用量封顶配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置用量封顶配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 用量封顶配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取用量封顶阈值，带宽单位为bps，流量单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BpsThreshold 用量封顶阈值，带宽单位为bps，流量单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBpsThreshold() const;

                    /**
                     * 设置用量封顶阈值，带宽单位为bps，流量单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bpsThreshold 用量封顶阈值，带宽单位为bps，流量单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBpsThreshold(const int64_t& _bpsThreshold);

                    /**
                     * 判断参数 BpsThreshold 是否已赋值
                     * @return BpsThreshold 是否已赋值
                     * 
                     */
                    bool BpsThresholdHasBeenSet() const;

                    /**
                     * 获取达到阈值后的操作
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CounterMeasure 达到阈值后的操作
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCounterMeasure() const;

                    /**
                     * 设置达到阈值后的操作
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _counterMeasure 达到阈值后的操作
RETURN_404：全部请求返回 404
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
                     * 获取境内区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerTime 境内区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置境内区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTriggerTime 境内区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     * 
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                    /**
                     * 获取用量封顶提醒配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertSwitch 用量封顶提醒配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlertSwitch() const;

                    /**
                     * 设置用量封顶提醒配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertSwitch 用量封顶提醒配置开关，取值有：
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
                     * 获取用量封顶阈值提醒百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertPercentage 用量封顶阈值提醒百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlertPercentage() const;

                    /**
                     * 设置用量封顶阈值提醒百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertPercentage 用量封顶阈值提醒百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertPercentage(const int64_t& _alertPercentage);

                    /**
                     * 判断参数 AlertPercentage 是否已赋值
                     * @return AlertPercentage 是否已赋值
                     * 
                     */
                    bool AlertPercentageHasBeenSet() const;

                    /**
                     * 获取海外区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerTimeOverseas 海外区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastTriggerTimeOverseas() const;

                    /**
                     * 设置海外区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTriggerTimeOverseas 海外区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTriggerTimeOverseas(const std::string& _lastTriggerTimeOverseas);

                    /**
                     * 判断参数 LastTriggerTimeOverseas 是否已赋值
                     * @return LastTriggerTimeOverseas 是否已赋值
                     * 
                     */
                    bool LastTriggerTimeOverseasHasBeenSet() const;

                    /**
                     * 获取用量阈值触发的维度
带宽：bandwidth
流量：flux
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metric 用量阈值触发的维度
带宽：bandwidth
流量：flux
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置用量阈值触发的维度
带宽：bandwidth
流量：flux
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metric 用量阈值触发的维度
带宽：bandwidth
流量：flux
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
                     * 获取累计用量配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticItems 累计用量配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StatisticItem> GetStatisticItems() const;

                    /**
                     * 设置累计用量配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statisticItems 累计用量配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatisticItems(const std::vector<StatisticItem>& _statisticItems);

                    /**
                     * 判断参数 StatisticItems 是否已赋值
                     * @return StatisticItems 是否已赋值
                     * 
                     */
                    bool StatisticItemsHasBeenSet() const;

                private:

                    /**
                     * 用量封顶配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 用量封顶阈值，带宽单位为bps，流量单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bpsThreshold;
                    bool m_bpsThresholdHasBeenSet;

                    /**
                     * 达到阈值后的操作
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_counterMeasure;
                    bool m_counterMeasureHasBeenSet;

                    /**
                     * 境内区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                    /**
                     * 用量封顶提醒配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alertSwitch;
                    bool m_alertSwitchHasBeenSet;

                    /**
                     * 用量封顶阈值提醒百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alertPercentage;
                    bool m_alertPercentageHasBeenSet;

                    /**
                     * 海外区域上次触发用量封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTriggerTimeOverseas;
                    bool m_lastTriggerTimeOverseasHasBeenSet;

                    /**
                     * 用量阈值触发的维度
带宽：bandwidth
流量：flux
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 累计用量配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatisticItem> m_statisticItems;
                    bool m_statisticItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_
