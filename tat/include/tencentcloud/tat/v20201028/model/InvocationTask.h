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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/TaskResult.h>
#include <tencentcloud/tat/v20201028/model/CommandDocument.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 执行任务。
                */
                class InvocationTask : public AbstractModel
                {
                public:
                    InvocationTask();
                    ~InvocationTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行活动ID。
                     * @return InvocationId 执行活动ID。
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置执行活动ID。
                     * @param InvocationId 执行活动ID。
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取执行任务ID。
                     * @return InvocationTaskId 执行任务ID。
                     */
                    std::string GetInvocationTaskId() const;

                    /**
                     * 设置执行任务ID。
                     * @param InvocationTaskId 执行任务ID。
                     */
                    void SetInvocationTaskId(const std::string& _invocationTaskId);

                    /**
                     * 判断参数 InvocationTaskId 是否已赋值
                     * @return InvocationTaskId 是否已赋值
                     */
                    bool InvocationTaskIdHasBeenSet() const;

                    /**
                     * 获取命令ID。
                     * @return CommandId 命令ID。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
                     * @param CommandId 命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> DELIVERING：下发中
<li> DELIVER_DELAYED：延时下发 
<li> DELIVER_FAILED：下发失败
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> TASK_TIMEOUT：执行任务超时
                     * @return TaskStatus 执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> DELIVERING：下发中
<li> DELIVER_DELAYED：延时下发 
<li> DELIVER_FAILED：下发失败
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> TASK_TIMEOUT：执行任务超时
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> DELIVERING：下发中
<li> DELIVER_DELAYED：延时下发 
<li> DELIVER_FAILED：下发失败
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> TASK_TIMEOUT：执行任务超时
                     * @param TaskStatus 执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> DELIVERING：下发中
<li> DELIVER_DELAYED：延时下发 
<li> DELIVER_FAILED：下发失败
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> TASK_TIMEOUT：执行任务超时
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param InstanceId 实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取执行结果。
                     * @return TaskResult 执行结果。
                     */
                    TaskResult GetTaskResult() const;

                    /**
                     * 设置执行结果。
                     * @param TaskResult 执行结果。
                     */
                    void SetTaskResult(const TaskResult& _taskResult);

                    /**
                     * 判断参数 TaskResult 是否已赋值
                     * @return TaskResult 是否已赋值
                     */
                    bool TaskResultHasBeenSet() const;

                    /**
                     * 获取执行任务开始时间。
                     * @return StartTime 执行任务开始时间。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置执行任务开始时间。
                     * @param StartTime 执行任务开始时间。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取执行任务结束时间。
                     * @return EndTime 执行任务结束时间。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置执行任务结束时间。
                     * @param EndTime 执行任务结束时间。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedTime 创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdatedTime 更新时间。
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间。
                     * @param UpdatedTime 更新时间。
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取执行任务所执行的命令详情。
                     * @return CommandDocument 执行任务所执行的命令详情。
                     */
                    CommandDocument GetCommandDocument() const;

                    /**
                     * 设置执行任务所执行的命令详情。
                     * @param CommandDocument 执行任务所执行的命令详情。
                     */
                    void SetCommandDocument(const CommandDocument& _commandDocument);

                    /**
                     * 判断参数 CommandDocument 是否已赋值
                     * @return CommandDocument 是否已赋值
                     */
                    bool CommandDocumentHasBeenSet() const;

                    /**
                     * 获取执行任务失败时的错误信息。
                     * @return ErrorInfo 执行任务失败时的错误信息。
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置执行任务失败时的错误信息。
                     * @param ErrorInfo 执行任务失败时的错误信息。
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     */
                    bool ErrorInfoHasBeenSet() const;

                private:

                    /**
                     * 执行活动ID。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * 执行任务ID。
                     */
                    std::string m_invocationTaskId;
                    bool m_invocationTaskIdHasBeenSet;

                    /**
                     * 命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 执行任务状态。取值范围：
<li> PENDING：等待下发 
<li> DELIVERING：下发中
<li> DELIVER_DELAYED：延时下发 
<li> DELIVER_FAILED：下发失败
<li> RUNNING：命令运行中
<li> SUCCESS：命令成功
<li> FAILED：命令失败
<li> TIMEOUT：命令超时
<li> TASK_TIMEOUT：执行任务超时
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 执行结果。
                     */
                    TaskResult m_taskResult;
                    bool m_taskResultHasBeenSet;

                    /**
                     * 执行任务开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 执行任务结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 执行任务所执行的命令详情。
                     */
                    CommandDocument m_commandDocument;
                    bool m_commandDocumentHasBeenSet;

                    /**
                     * 执行任务失败时的错误信息。
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_
