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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/MonitorMetricItem.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 监控指标配置
                */
                class MonitorMetricBrief : public AbstractModel
                {
                public:
                    MonitorMetricBrief();
                    ~MonitorMetricBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控指标 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorMetricId 监控指标 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorMetricId() const;

                    /**
                     * 设置监控指标 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorMetricId 监控指标 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorMetricId(const std::string& _monitorMetricId);

                    /**
                     * 判断参数 MonitorMetricId 是否已赋值
                     * @return MonitorMetricId 是否已赋值
                     * 
                     */
                    bool MonitorMetricIdHasBeenSet() const;

                    /**
                     * 获取告警的监控对象类型，如工作流、任务等，当前支持 1. WORKFLOW 2. TASK
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmMonitorType 告警的监控对象类型，如工作流、任务等，当前支持 1. WORKFLOW 2. TASK
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmMonitorType() const;

                    /**
                     * 设置告警的监控对象类型，如工作流、任务等，当前支持 1. WORKFLOW 2. TASK
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmMonitorType 告警的监控对象类型，如工作流、任务等，当前支持 1. WORKFLOW 2. TASK
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmMonitorType(const std::string& _alarmMonitorType);

                    /**
                     * 判断参数 AlarmMonitorType 是否已赋值
                     * @return AlarmMonitorType 是否已赋值
                     * 
                     */
                    bool AlarmMonitorTypeHasBeenSet() const;

                    /**
                     * 获取监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics 监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MonitorMetricItem> GetMetrics() const;

                    /**
                     * 设置监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metrics 监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetrics(const std::vector<MonitorMetricItem>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * 监控指标 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorMetricId;
                    bool m_monitorMetricIdHasBeenSet;

                    /**
                     * 告警的监控对象类型，如工作流、任务等，当前支持 1. WORKFLOW 2. TASK
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmMonitorType;
                    bool m_alarmMonitorTypeHasBeenSet;

                    /**
                     * 监控指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MonitorMetricItem> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICBRIEF_H_
