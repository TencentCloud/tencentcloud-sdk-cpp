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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 查询策略输出的阈值告警条件
                */
                class DescribePolicyGroupInfoCondition : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoCondition();
                    ~DescribePolicyGroupInfoCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标名称</p>
                     * @return MetricShowName <p>指标名称</p>
                     * 
                     */
                    std::string GetMetricShowName() const;

                    /**
                     * 设置<p>指标名称</p>
                     * @param _metricShowName <p>指标名称</p>
                     * 
                     */
                    void SetMetricShowName(const std::string& _metricShowName);

                    /**
                     * 判断参数 MetricShowName 是否已赋值
                     * @return MetricShowName 是否已赋值
                     * 
                     */
                    bool MetricShowNameHasBeenSet() const;

                    /**
                     * 获取<p>数据聚合周期(单位秒)</p>
                     * @return Period <p>数据聚合周期(单位秒)</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>数据聚合周期(单位秒)</p>
                     * @param _period <p>数据聚合周期(单位秒)</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>指标id</p>
                     * @return MetricId <p>指标id</p>
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置<p>指标id</p>
                     * @param _metricId <p>指标id</p>
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
                     * 获取<p>阈值规则id</p>
                     * @return RuleId <p>阈值规则id</p>
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置<p>阈值规则id</p>
                     * @param _ruleId <p>阈值规则id</p>
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>指标单位</p>
                     * @return Unit <p>指标单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>指标单位</p>
                     * @param _unit <p>指标单位</p>
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
                     * 获取<p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * @return AlarmNotifyType <p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置<p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * @param _alarmNotifyType <p>告警发送收敛类型。0连续告警，1指数告警</p>
                     * 
                     */
                    void SetAlarmNotifyType(const int64_t& _alarmNotifyType);

                    /**
                     * 判断参数 AlarmNotifyType 是否已赋值
                     * @return AlarmNotifyType 是否已赋值
                     * 
                     */
                    bool AlarmNotifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * @return AlarmNotifyPeriod <p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * 
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置<p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * @param _alarmNotifyPeriod <p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     * 
                     */
                    void SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     * 
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取<p>比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcType <p>比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCalcType() const;

                    /**
                     * 设置<p>比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcType <p>比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcType(const int64_t& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取<p>检测阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcValue <p>检测阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置<p>检测阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcValue <p>检测阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcValue(const std::string& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     * 
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取<p>持续多长时间触发规则会告警(单位秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinueTime <p>持续多长时间触发规则会告警(单位秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContinueTime() const;

                    /**
                     * 设置<p>持续多长时间触发规则会告警(单位秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continueTime <p>持续多长时间触发规则会告警(单位秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContinueTime(const int64_t& _continueTime);

                    /**
                     * 判断参数 ContinueTime 是否已赋值
                     * @return ContinueTime 是否已赋值
                     * 
                     */
                    bool ContinueTimeHasBeenSet() const;

                    /**
                     * 获取<p>告警指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName <p>告警指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>告警指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName <p>告警指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * <p>指标名称</p>
                     */
                    std::string m_metricShowName;
                    bool m_metricShowNameHasBeenSet;

                    /**
                     * <p>数据聚合周期(单位秒)</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>指标id</p>
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * <p>阈值规则id</p>
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>指标单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>告警发送收敛类型。0连续告警，1指数告警</p>
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * <p>告警发送周期单位秒。&lt;0 不触发, 0 只触发一次, &gt;0 每隔triggerTime秒触发一次</p>
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * <p>比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * <p>检测阈值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * <p>持续多长时间触发规则会告警(单位秒)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * <p>告警指标名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITION_H_
