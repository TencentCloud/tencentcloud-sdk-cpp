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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPCONDITION_H_

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
                * 创建策略传入的阈值告警条件
                */
                class CreatePolicyGroupCondition : public AbstractModel
                {
                public:
                    CreatePolicyGroupCondition();
                    ~CreatePolicyGroupCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标Id
                     * @return MetricId 指标Id
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置指标Id
                     * @param _metricId 指标Id
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
                     * 获取比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等。如果指标有配置默认比较类型值可以不填。
                     * @return CalcType 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等。如果指标有配置默认比较类型值可以不填。
                     * 
                     */
                    int64_t GetCalcType() const;

                    /**
                     * 设置比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等。如果指标有配置默认比较类型值可以不填。
                     * @param _calcType 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等。如果指标有配置默认比较类型值可以不填。
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
                     * 获取比较的值，如果指标不必须CalcValue可不填
                     * @return CalcValue 比较的值，如果指标不必须CalcValue可不填
                     * 
                     */
                    double GetCalcValue() const;

                    /**
                     * 设置比较的值，如果指标不必须CalcValue可不填
                     * @param _calcValue 比较的值，如果指标不必须CalcValue可不填
                     * 
                     */
                    void SetCalcValue(const double& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     * 
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取数据聚合周期(单位秒)，若指标有默认值可不填
                     * @return CalcPeriod 数据聚合周期(单位秒)，若指标有默认值可不填
                     * 
                     */
                    int64_t GetCalcPeriod() const;

                    /**
                     * 设置数据聚合周期(单位秒)，若指标有默认值可不填
                     * @param _calcPeriod 数据聚合周期(单位秒)，若指标有默认值可不填
                     * 
                     */
                    void SetCalcPeriod(const int64_t& _calcPeriod);

                    /**
                     * 判断参数 CalcPeriod 是否已赋值
                     * @return CalcPeriod 是否已赋值
                     * 
                     */
                    bool CalcPeriodHasBeenSet() const;

                    /**
                     * 获取持续几个检测周期触发规则会告警
                     * @return ContinuePeriod 持续几个检测周期触发规则会告警
                     * 
                     */
                    int64_t GetContinuePeriod() const;

                    /**
                     * 设置持续几个检测周期触发规则会告警
                     * @param _continuePeriod 持续几个检测周期触发规则会告警
                     * 
                     */
                    void SetContinuePeriod(const int64_t& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                    /**
                     * 获取如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * @return RuleId 如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * @param _ruleId 如果通过模板创建，需要传入模板中该指标的对应RuleId
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 指标Id
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

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
                     * 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等。如果指标有配置默认比较类型值可以不填。
                     */
                    int64_t m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 比较的值，如果指标不必须CalcValue可不填
                     */
                    double m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * 数据聚合周期(单位秒)，若指标有默认值可不填
                     */
                    int64_t m_calcPeriod;
                    bool m_calcPeriodHasBeenSet;

                    /**
                     * 持续几个检测周期触发规则会告警
                     */
                    int64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * 如果通过模板创建，需要传入模板中该指标的对应RuleId
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPOLICYGROUPCONDITION_H_
