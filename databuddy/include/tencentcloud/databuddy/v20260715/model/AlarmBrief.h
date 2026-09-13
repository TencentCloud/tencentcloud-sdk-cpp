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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/AlarmGroup.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 告警配置
                */
                class AlarmBrief : public AbstractModel
                {
                public:
                    AlarmBrief();
                    ~AlarmBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmId 告警 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmId 告警 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

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
                     * 获取告警组，最多 50 个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmGroups 告警组，最多 50 个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmGroup> GetAlarmGroups() const;

                    /**
                     * 设置告警组，最多 50 个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmGroups 告警组，最多 50 个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmGroups(const std::vector<AlarmGroup>& _alarmGroups);

                    /**
                     * 判断参数 AlarmGroups 是否已赋值
                     * @return AlarmGroups 是否已赋值
                     * 
                     */
                    bool AlarmGroupsHasBeenSet() const;

                    /**
                     * 获取被跳过时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoNotDisturbWhenSkipped 被跳过时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDoNotDisturbWhenSkipped() const;

                    /**
                     * 设置被跳过时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doNotDisturbWhenSkipped 被跳过时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDoNotDisturbWhenSkipped(const bool& _doNotDisturbWhenSkipped);

                    /**
                     * 判断参数 DoNotDisturbWhenSkipped 是否已赋值
                     * @return DoNotDisturbWhenSkipped 是否已赋值
                     * 
                     */
                    bool DoNotDisturbWhenSkippedHasBeenSet() const;

                    /**
                     * 获取被手动终止时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoNotDisturbWhenManuallyTerminated 被手动终止时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDoNotDisturbWhenManuallyTerminated() const;

                    /**
                     * 设置被手动终止时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doNotDisturbWhenManuallyTerminated 被手动终止时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDoNotDisturbWhenManuallyTerminated(const bool& _doNotDisturbWhenManuallyTerminated);

                    /**
                     * 判断参数 DoNotDisturbWhenManuallyTerminated 是否已赋值
                     * @return DoNotDisturbWhenManuallyTerminated 是否已赋值
                     * 
                     */
                    bool DoNotDisturbWhenManuallyTerminatedHasBeenSet() const;

                    /**
                     * 获取最后一次重试前免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DoNotDisturbUntilTheLastRetry 最后一次重试前免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDoNotDisturbUntilTheLastRetry() const;

                    /**
                     * 设置最后一次重试前免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _doNotDisturbUntilTheLastRetry 最后一次重试前免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDoNotDisturbUntilTheLastRetry(const bool& _doNotDisturbUntilTheLastRetry);

                    /**
                     * 判断参数 DoNotDisturbUntilTheLastRetry 是否已赋值
                     * @return DoNotDisturbUntilTheLastRetry 是否已赋值
                     * 
                     */
                    bool DoNotDisturbUntilTheLastRetryHasBeenSet() const;

                private:

                    /**
                     * 告警 ID，创建时无需传入，由服务端生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 告警的监控对象类型，如工作流、任务等，当前支持 1. WORKFLOW 2. TASK
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmMonitorType;
                    bool m_alarmMonitorTypeHasBeenSet;

                    /**
                     * 告警组，最多 50 个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmGroup> m_alarmGroups;
                    bool m_alarmGroupsHasBeenSet;

                    /**
                     * 被跳过时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_doNotDisturbWhenSkipped;
                    bool m_doNotDisturbWhenSkippedHasBeenSet;

                    /**
                     * 被手动终止时免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_doNotDisturbWhenManuallyTerminated;
                    bool m_doNotDisturbWhenManuallyTerminatedHasBeenSet;

                    /**
                     * 最后一次重试前免打扰，默认值 false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_doNotDisturbUntilTheLastRetry;
                    bool m_doNotDisturbUntilTheLastRetryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ALARMBRIEF_H_
