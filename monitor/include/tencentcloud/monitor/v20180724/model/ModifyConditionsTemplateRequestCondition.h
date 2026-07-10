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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTCONDITION_H_

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
                * ModifyConditionsTemplateRequestCondition，Condition入参字段值
                */
                class ModifyConditionsTemplateRequestCondition : public AbstractModel
                {
                public:
                    ModifyConditionsTemplateRequestCondition();
                    ~ModifyConditionsTemplateRequestCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>统计周期</p>
                     * @return CalcPeriod <p>统计周期</p>
                     * 
                     */
                    std::string GetCalcPeriod() const;

                    /**
                     * 设置<p>统计周期</p>
                     * @param _calcPeriod <p>统计周期</p>
                     * 
                     */
                    void SetCalcPeriod(const std::string& _calcPeriod);

                    /**
                     * 判断参数 CalcPeriod 是否已赋值
                     * @return CalcPeriod 是否已赋值
                     * 
                     */
                    bool CalcPeriodHasBeenSet() const;

                    /**
                     * 获取<p>统计方式</p>
                     * @return CalcType <p>统计方式</p>
                     * 
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置<p>统计方式</p>
                     * @param _calcType <p>统计方式</p>
                     * 
                     */
                    void SetCalcType(const std::string& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取<p>持续周期</p>
                     * @return ContinuePeriod <p>持续周期</p>
                     * 
                     */
                    std::string GetContinuePeriod() const;

                    /**
                     * 设置<p>持续周期</p>
                     * @param _continuePeriod <p>持续周期</p>
                     * 
                     */
                    void SetContinuePeriod(const std::string& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                    /**
                     * 获取<p>指标ID</p>
                     * @return MetricID <p>指标ID</p>
                     * 
                     */
                    int64_t GetMetricID() const;

                    /**
                     * 设置<p>指标ID</p>
                     * @param _metricID <p>指标ID</p>
                     * 
                     */
                    void SetMetricID(const int64_t& _metricID);

                    /**
                     * 判断参数 MetricID 是否已赋值
                     * @return MetricID 是否已赋值
                     * 
                     */
                    bool MetricIDHasBeenSet() const;

                    /**
                     * 获取<p>统计值</p>
                     * @return CalcValue <p>统计值</p>
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置<p>统计值</p>
                     * @param _calcValue <p>统计值</p>
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
                     * 获取<p>告警通知周期</p>
                     * @return AlarmNotifyPeriod <p>告警通知周期</p>
                     * 
                     */
                    std::string GetAlarmNotifyPeriod() const;

                    /**
                     * 设置<p>告警通知周期</p>
                     * @param _alarmNotifyPeriod <p>告警通知周期</p>
                     * 
                     */
                    void SetAlarmNotifyPeriod(const std::string& _alarmNotifyPeriod);

                    /**
                     * 判断参数 AlarmNotifyPeriod 是否已赋值
                     * @return AlarmNotifyPeriod 是否已赋值
                     * 
                     */
                    bool AlarmNotifyPeriodHasBeenSet() const;

                    /**
                     * 获取<p>告警通知方式</p>
                     * @return AlarmNotifyType <p>告警通知方式</p>
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置<p>告警通知方式</p>
                     * @param _alarmNotifyType <p>告警通知方式</p>
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
                     * 获取<p>规则ID</p>
                     * @return RuleID <p>规则ID</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleID <p>规则ID</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * <p>统计周期</p>
                     */
                    std::string m_calcPeriod;
                    bool m_calcPeriodHasBeenSet;

                    /**
                     * <p>统计方式</p>
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * <p>持续周期</p>
                     */
                    std::string m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * <p>指标ID</p>
                     */
                    int64_t m_metricID;
                    bool m_metricIDHasBeenSet;

                    /**
                     * <p>统计值</p>
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * <p>告警通知周期</p>
                     */
                    std::string m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * <p>告警通知方式</p>
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTCONDITION_H_
