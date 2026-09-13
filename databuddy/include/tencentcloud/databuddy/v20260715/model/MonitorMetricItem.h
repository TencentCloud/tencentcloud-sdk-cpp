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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICITEM_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 单个监控指标
                */
                class MonitorMetricItem : public AbstractModel
                {
                public:
                    MonitorMetricItem();
                    ~MonitorMetricItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控指标类型,有三种类型：1. RUN_DURATION（运行时长）2. WAIT_DURATION（等待时长）3. COMPLETION_TIME（完成时间）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricType 监控指标类型,有三种类型：1. RUN_DURATION（运行时长）2. WAIT_DURATION（等待时长）3. COMPLETION_TIME（完成时间）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置监控指标类型,有三种类型：1. RUN_DURATION（运行时长）2. WAIT_DURATION（等待时长）3. COMPLETION_TIME（完成时间）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricType 监控指标类型,有三种类型：1. RUN_DURATION（运行时长）2. WAIT_DURATION（等待时长）3. COMPLETION_TIME（完成时间）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取警告阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarningThreshold 警告阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarningThreshold() const;

                    /**
                     * 设置警告阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warningThreshold 警告阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarningThreshold(const std::string& _warningThreshold);

                    /**
                     * 判断参数 WarningThreshold 是否已赋值
                     * @return WarningThreshold 是否已赋值
                     * 
                     */
                    bool WarningThresholdHasBeenSet() const;

                    /**
                     * 获取超时阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutThreshold 超时阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeoutThreshold() const;

                    /**
                     * 设置超时阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutThreshold 超时阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutThreshold(const std::string& _timeoutThreshold);

                    /**
                     * 判断参数 TimeoutThreshold 是否已赋值
                     * @return TimeoutThreshold 是否已赋值
                     * 
                     */
                    bool TimeoutThresholdHasBeenSet() const;

                private:

                    /**
                     * 监控指标类型,有三种类型：1. RUN_DURATION（运行时长）2. WAIT_DURATION（等待时长）3. COMPLETION_TIME（完成时间）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 警告阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warningThreshold;
                    bool m_warningThresholdHasBeenSet;

                    /**
                     * 超时阈值，单位为毫秒级别，对于COMPLETION_TIME:从当日时间点00:00起算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeoutThreshold;
                    bool m_timeoutThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICITEM_H_
