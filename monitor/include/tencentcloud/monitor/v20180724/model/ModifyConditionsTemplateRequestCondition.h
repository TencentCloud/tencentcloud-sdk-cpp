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
                     * 获取统计周期
                     * @return CalcPeriod 统计周期
                     * 
                     */
                    std::string GetCalcPeriod() const;

                    /**
                     * 设置统计周期
                     * @param _calcPeriod 统计周期
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
                     * 获取统计方式
                     * @return CalcType 统计方式
                     * 
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置统计方式
                     * @param _calcType 统计方式
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
                     * 获取持续周期
                     * @return ContinuePeriod 持续周期
                     * 
                     */
                    std::string GetContinuePeriod() const;

                    /**
                     * 设置持续周期
                     * @param _continuePeriod 持续周期
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
                     * 获取指标ID
                     * @return MetricID 指标ID
                     * 
                     */
                    int64_t GetMetricID() const;

                    /**
                     * 设置指标ID
                     * @param _metricID 指标ID
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
                     * 获取统计值
                     * @return CalcValue 统计值
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置统计值
                     * @param _calcValue 统计值
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
                     * 获取告警通知周期
                     * @return AlarmNotifyPeriod 告警通知周期
                     * 
                     */
                    std::string GetAlarmNotifyPeriod() const;

                    /**
                     * 设置告警通知周期
                     * @param _alarmNotifyPeriod 告警通知周期
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
                     * 获取告警通知方式
                     * @return AlarmNotifyType 告警通知方式
                     * 
                     */
                    int64_t GetAlarmNotifyType() const;

                    /**
                     * 设置告警通知方式
                     * @param _alarmNotifyType 告警通知方式
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
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
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
                     * 统计周期
                     */
                    std::string m_calcPeriod;
                    bool m_calcPeriodHasBeenSet;

                    /**
                     * 统计方式
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 持续周期
                     */
                    std::string m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                    /**
                     * 指标ID
                     */
                    int64_t m_metricID;
                    bool m_metricIDHasBeenSet;

                    /**
                     * 统计值
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * 告警通知周期
                     */
                    std::string m_alarmNotifyPeriod;
                    bool m_alarmNotifyPeriodHasBeenSet;

                    /**
                     * 告警通知方式
                     */
                    int64_t m_alarmNotifyType;
                    bool m_alarmNotifyTypeHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYCONDITIONSTEMPLATEREQUESTCONDITION_H_
