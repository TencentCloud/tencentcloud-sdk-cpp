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
                     * 获取指标名称
                     * @return MetricShowName 指标名称
                     * 
                     */
                    std::string GetMetricShowName() const;

                    /**
                     * 设置指标名称
                     * @param _metricShowName 指标名称
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
                     * 获取数据聚合周期(单位秒)
                     * @return Period 数据聚合周期(单位秒)
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置数据聚合周期(单位秒)
                     * @param _period 数据聚合周期(单位秒)
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
                     * 获取指标id
                     * @return MetricId 指标id
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置指标id
                     * @param _metricId 指标id
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
                     * 获取阈值规则id
                     * @return RuleId 阈值规则id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置阈值规则id
                     * @param _ruleId 阈值规则id
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
                     * 获取告警发送收敛类型。0连续告警，1指数告警
                     * @return AlarmNotifyType 告警发送收敛类型。0连续告警，1指数告警
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置告警发送收敛类型。0连续告警，1指数告警
                     * @param _alarmNotifyType 告警发送收敛类型。0连续告警，1指数告警
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
                     * 获取告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * @return AlarmNotifyPeriod 告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * 
                     */
                    int64_t GetAlarmNotifyPeriod() const;

                    /**
                     * 设置告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     * @param _alarmNotifyPeriod 告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
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
                     * 获取比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcType 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCalcType() const;

                    /**
                     * 设置比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcType 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降
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
                     * 获取检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcValue 检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcValue 检测阈值
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
                     * 获取持续多长时间触发规则会告警(单位秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinueTime 持续多长时间触发规则会告警(单位秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContinueTime() const;

                    /**
                     * 设置持续多长时间触发规则会告警(单位秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continueTime 持续多长时间触发规则会告警(单位秒)
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
                     * 获取告警指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 告警指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置告警指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 告警指标名
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
                     * 指标名称
                     */
                    std::string m_metricShowName;
                    bool m_metricShowNameHasBeenSet;

                    /**
                     * 数据聚合周期(单位秒)
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 指标id
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 阈值规则id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 指标单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 告警发送收敛类型。0连续告警，1指数告警
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * 告警发送周期单位秒。<0 不触发, 0 只触发一次, >0 每隔triggerTime秒触发一次
                     */
                    int64_t m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等，7表示日同比上涨，8表示日同比下降，9表示周同比上涨，10表示周同比下降，11表示周期环比上涨，12表示周期环比下降
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * 持续多长时间触发规则会告警(单位秒)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * 告警指标名
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
