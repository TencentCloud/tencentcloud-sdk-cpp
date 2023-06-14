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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORYMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORYMETRIC_H_

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
                * 告警历史的指标信息
                */
                class AlarmHistoryMetric : public AbstractModel
                {
                public:
                    AlarmHistoryMetric();
                    ~AlarmHistoryMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云产品监控类型查询数据使用的命名空间
                     * @return QceNamespace 云产品监控类型查询数据使用的命名空间
                     * 
                     */
                    std::string GetQceNamespace() const;

                    /**
                     * 设置云产品监控类型查询数据使用的命名空间
                     * @param _qceNamespace 云产品监控类型查询数据使用的命名空间
                     * 
                     */
                    void SetQceNamespace(const std::string& _qceNamespace);

                    /**
                     * 判断参数 QceNamespace 是否已赋值
                     * @return QceNamespace 是否已赋值
                     * 
                     */
                    bool QceNamespaceHasBeenSet() const;

                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取统计周期
                     * @return Period 统计周期
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置统计周期
                     * @param _period 统计周期
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
                     * 获取触发告警的数值
                     * @return Value 触发告警的数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置触发告警的数值
                     * @param _value 触发告警的数值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取指标的展示名
                     * @return Description 指标的展示名
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置指标的展示名
                     * @param _description 指标的展示名
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 云产品监控类型查询数据使用的命名空间
                     */
                    std::string m_qceNamespace;
                    bool m_qceNamespaceHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计周期
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 触发告警的数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 指标的展示名
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORYMETRIC_H_
