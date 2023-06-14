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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPCONDITION_H_

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
                * 修改告警策略组传入的指标阈值条件
                */
                class ModifyPolicyGroupCondition : public AbstractModel
                {
                public:
                    ModifyPolicyGroupCondition();
                    ~ModifyPolicyGroupCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等
                     * @return CalcType 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等
                     * 
                     */
                    int64_t GetCalcType() const;

                    /**
                     * 设置比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等
                     * @param _calcType 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等
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
                     * @return CalcValue 检测阈值
                     * 
                     */
                    std::string GetCalcValue() const;

                    /**
                     * 设置检测阈值
                     * @param _calcValue 检测阈值
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
                     * 获取检测指标的数据周期
                     * @return CalcPeriod 检测指标的数据周期
                     * 
                     */
                    int64_t GetCalcPeriod() const;

                    /**
                     * 设置检测指标的数据周期
                     * @param _calcPeriod 检测指标的数据周期
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
                     * 获取持续周期个数
                     * @return ContinuePeriod 持续周期个数
                     * 
                     */
                    int64_t GetContinuePeriod() const;

                    /**
                     * 设置持续周期个数
                     * @param _continuePeriod 持续周期个数
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
                     * 获取规则id，不填表示新增，填写了ruleId表示在已存在的规则基础上进行修改
                     * @return RuleId 规则id，不填表示新增，填写了ruleId表示在已存在的规则基础上进行修改
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id，不填表示新增，填写了ruleId表示在已存在的规则基础上进行修改
                     * @param _ruleId 规则id，不填表示新增，填写了ruleId表示在已存在的规则基础上进行修改
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
                     * 指标id
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 比较类型，1表示大于，2表示大于等于，3表示小于，4表示小于等于，5表示相等，6表示不相等
                     */
                    int64_t m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 检测阈值
                     */
                    std::string m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * 检测指标的数据周期
                     */
                    int64_t m_calcPeriod;
                    bool m_calcPeriodHasBeenSet;

                    /**
                     * 持续周期个数
                     */
                    int64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

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
                     * 规则id，不填表示新增，填写了ruleId表示在已存在的规则基础上进行修改
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPOLICYGROUPCONDITION_H_
