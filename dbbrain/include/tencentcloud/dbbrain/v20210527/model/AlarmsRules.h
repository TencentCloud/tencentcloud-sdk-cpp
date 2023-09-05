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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ALARMSRULES_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ALARMSRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 告警规则
                */
                class AlarmsRules : public AbstractModel
                {
                public:
                    AlarmsRules();
                    ~AlarmsRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取间隔
                     * @return Interval 间隔
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置间隔
                     * @param _interval 间隔
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取告警名
                     * @return Name 告警名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警名
                     * @param _name 告警名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取指标
                     * @return Metric 指标
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标
                     * @param _metric 指标
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
                     * 获取操作符
                     * @return Operator 操作符
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作符
                     * @param _operator 操作符
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取等级 
fatal-致命
critical-严重
warning-告警
information-通知

                     * @return Severity 等级 
fatal-致命
critical-严重
warning-告警
information-通知

                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置等级 
fatal-致命
critical-严重
warning-告警
information-通知

                     * @param _severity 等级 
fatal-致命
critical-严重
warning-告警
information-通知

                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取指标值
                     * @return Value 指标值
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置指标值
                     * @param _value 指标值
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 间隔
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 告警名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 指标
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 操作符
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 等级 
fatal-致命
critical-严重
warning-告警
information-通知

                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 指标值
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ALARMSRULES_H_
