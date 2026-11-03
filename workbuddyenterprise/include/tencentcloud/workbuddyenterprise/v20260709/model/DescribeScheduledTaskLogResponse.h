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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKLOGRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeScheduledTaskLog返回参数结构体
                */
                class DescribeScheduledTaskLogResponse : public AbstractModel
                {
                public:
                    DescribeScheduledTaskLogResponse();
                    ~DescribeScheduledTaskLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行日志 ID</p>
                     * @return LogId <p>执行日志 ID</p>
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务唯一标识</p>
                     * @return TaskKey <p>任务唯一标识</p>
                     * 
                     */
                    std::string GetTaskKey() const;

                    /**
                     * 判断参数 TaskKey 是否已赋值
                     * @return TaskKey 是否已赋值
                     * 
                     */
                    bool TaskKeyHasBeenSet() const;

                    /**
                     * 获取<p>关联会话 ID</p>
                     * @return SessionId <p>关联会话 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>触发类型：MANUAL（手动）/ CRON（定时）</p>
                     * @return TriggerType <p>触发类型：MANUAL（手动）/ CRON（定时）</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行状态</p>
                     * @return Status <p>执行状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>本次执行 Prompt</p>
                     * @return Prompt <p>本次执行 Prompt</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>执行输出内容（完整结果；列表接口 DescribeScheduledTaskLogList 仅返回前 50 字符预览）</p>
                     * @return Result <p>执行输出内容（完整结果；列表接口 DescribeScheduledTaskLogList 仅返回前 50 字符预览）</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行时长（毫秒）</p>
                     * @return DurationMs <p>执行时长（毫秒）</p>
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取<p>投递状态</p>
                     * @return DeliveryStatus <p>投递状态</p>
                     * 
                     */
                    std::string GetDeliveryStatus() const;

                    /**
                     * 判断参数 DeliveryStatus 是否已赋值
                     * @return DeliveryStatus 是否已赋值
                     * 
                     */
                    bool DeliveryStatusHasBeenSet() const;

                    /**
                     * 获取<p>投递错误信息</p>
                     * @return DeliveryError <p>投递错误信息</p>
                     * 
                     */
                    std::string GetDeliveryError() const;

                    /**
                     * 判断参数 DeliveryError 是否已赋值
                     * @return DeliveryError 是否已赋值
                     * 
                     */
                    bool DeliveryErrorHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return ErrorMessage <p>失败原因</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
                     * @return SessionName <p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                private:

                    /**
                     * <p>执行日志 ID</p>
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务唯一标识</p>
                     */
                    std::string m_taskKey;
                    bool m_taskKeyHasBeenSet;

                    /**
                     * <p>关联会话 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>触发类型：MANUAL（手动）/ CRON（定时）</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>执行状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>本次执行 Prompt</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>执行输出内容（完整结果；列表接口 DescribeScheduledTaskLogList 仅返回前 50 字符预览）</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>执行时长（毫秒）</p>
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * <p>投递状态</p>
                     */
                    std::string m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * <p>投递错误信息</p>
                     */
                    std::string m_deliveryError;
                    bool m_deliveryErrorHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>会话名称（AgentOS 侧生成的 AI 标题 / 用户改名）；缺失时为空，调用方可兜底展示 SessionId 后缀</p>
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKLOGRESPONSE_H_
