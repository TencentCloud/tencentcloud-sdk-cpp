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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 执行任务记录
                */
                class AiScheduleTaskInfo : public AbstractModel
                {
                public:
                    AiScheduleTaskInfo();
                    ~AiScheduleTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>所属AI 定时任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleId <p>所属AI 定时任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>所属AI 定时任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleId <p>所属AI 定时任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取<p>触发该任务的触发器 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerId <p>触发该任务的触发器 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>触发该任务的触发器 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerId <p>触发该任务的触发器 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent 调用的唯一会话 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>Agent 调用的唯一会话 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Agent 调用的唯一会话 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>Agent 调用的唯一会话 ID。</p>
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
                     * 获取<p>执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Agent 输出结果或错误详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result <p>Agent 输出结果或错误详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>Agent 输出结果或错误详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result <p>Agent 输出结果或错误详情。</p>
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

                    /**
                     * 获取<p>计划触发时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledTime <p>计划触发时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScheduledTime() const;

                    /**
                     * 设置<p>计划触发时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledTime <p>计划触发时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduledTime(const int64_t& _scheduledTime);

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                    /**
                     * 获取<p>实际开始执行时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>实际开始执行时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>实际开始执行时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>实际开始执行时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行完成时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>执行完成时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>执行完成时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>执行完成时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>定时任务名称</p>
                     * @return TaskName <p>定时任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>定时任务名称</p>
                     * @param _taskName <p>定时任务名称</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>定时任务提示词</p>
                     * @return Prompts <p>定时任务提示词</p>
                     * 
                     */
                    std::string GetPrompts() const;

                    /**
                     * 设置<p>定时任务提示词</p>
                     * @param _prompts <p>定时任务提示词</p>
                     * 
                     */
                    void SetPrompts(const std::string& _prompts);

                    /**
                     * 判断参数 Prompts 是否已赋值
                     * @return Prompts 是否已赋值
                     * 
                     */
                    bool PromptsHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>所属AI 定时任务 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>触发该任务的触发器 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>Agent 调用的唯一会话 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Agent 输出结果或错误详情。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>计划触发时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                    /**
                     * <p>实际开始执行时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>执行完成时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>创建时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，Unix 毫秒时间戳。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>定时任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>定时任务提示词</p>
                     */
                    std::string m_prompts;
                    bool m_promptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETASKINFO_H_
