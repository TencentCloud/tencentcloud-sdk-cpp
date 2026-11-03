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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKLOGSUMMARY_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKLOGSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 定时任务执行日志列表项
                */
                class ScheduledTaskLogSummary : public AbstractModel
                {
                public:
                    ScheduledTaskLogSummary();
                    ~ScheduledTaskLogSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行日志 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogId <p>执行日志 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置<p>执行日志 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logId <p>执行日志 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取<p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskKey <p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskKey() const;

                    /**
                     * 设置<p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskKey <p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskKey(const std::string& _taskKey);

                    /**
                     * 判断参数 TaskKey 是否已赋值
                     * @return TaskKey 是否已赋值
                     * 
                     */
                    bool TaskKeyHasBeenSet() const;

                    /**
                     * 获取<p>触发类型：MANUAL（手动）/ CRON（定时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>触发类型：MANUAL（手动）/ CRON（定时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>触发类型：MANUAL（手动）/ CRON（定时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>触发类型：MANUAL（手动）/ CRON（定时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>执行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>执行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>执行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationMs <p>执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置<p>执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _durationMs <p>执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDurationMs(const int64_t& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取<p>投递状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliveryStatus <p>投递状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 设置<p>投递状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliveryStatus <p>投递状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliveryStatus(const std::string& _deliveryStatus);

                    /**
                     * 判断参数 DeliveryStatus 是否已赋值
                     * @return DeliveryStatus 是否已赋值
                     * 
                     */
                    bool DeliveryStatusHasBeenSet() const;

                    /**
                     * 获取<p>关联会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>关联会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>关联会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>关联会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionName <p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置<p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionName <p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取<p>执行结果预览（前 50 字符），仅用于列表页展示；完整结果请调用 DescribeScheduledTaskLog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result <p>执行结果预览（前 50 字符），仅用于列表页展示；完整结果请调用 DescribeScheduledTaskLog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>执行结果预览（前 50 字符），仅用于列表页展示；完整结果请调用 DescribeScheduledTaskLog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result <p>执行结果预览（前 50 字符），仅用于列表页展示；完整结果请调用 DescribeScheduledTaskLog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * <p>执行日志 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * <p>任务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskKey;
                    bool m_taskKeyHasBeenSet;

                    /**
                     * <p>触发类型：MANUAL（手动）/ CRON（定时）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>执行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>执行时长（毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * <p>投递状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>关联会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * <p>执行结果预览（前 50 字符），仅用于列表页展示；完整结果请调用 DescribeScheduledTaskLog</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SCHEDULEDTASKLOGSUMMARY_H_
