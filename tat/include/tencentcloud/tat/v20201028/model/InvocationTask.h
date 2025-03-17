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
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置执行活动ID。
                     * @param _invocationId 执行活动ID。
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取执行任务ID。
                     * @return InvocationTaskId 执行任务ID。
                     * 
                     */
                    std::string GetInvocationTaskId() const;

                    /**
                     * 设置执行任务ID。
                     * @param _invocationTaskId 执行任务ID。
                     * 
                     */
                    void SetInvocationTaskId(const std::string& _invocationTaskId);

                    /**
                     * 判断参数 InvocationTaskId 是否已赋值
                     * @return InvocationTaskId 是否已赋值
                     * 
                     */
                    bool InvocationTaskIdHasBeenSet() const;

                    /**
                     * 获取命令ID。
                     * @return CommandId 命令ID。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
                     * @param _commandId 命令ID。
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取执行任务状态。取值范围：

- PENDING：等待下发
- DELIVERING：下发中
- DELIVER_DELAYED：延时下发
- DELIVER_FAILED：下发失败
- START_FAILED：命令启动失败
- RUNNING：命令运行中
- SUCCESS：命令成功
- FAILED：命令执行失败，执行完退出码不为 0
- TIMEOUT：命令超时
- TASK_TIMEOUT：客户端无响应
- CANCELLING：取消中
- CANCELLED：已取消（命令启动前就被取消）
- TERMINATED：已中止（命令执行期间被取消）
                     * @return TaskStatus 执行任务状态。取值范围：

- PENDING：等待下发
- DELIVERING：下发中
- DELIVER_DELAYED：延时下发
- DELIVER_FAILED：下发失败
- START_FAILED：命令启动失败
- RUNNING：命令运行中
- SUCCESS：命令成功
- FAILED：命令执行失败，执行完退出码不为 0
- TIMEOUT：命令超时
- TASK_TIMEOUT：客户端无响应
- CANCELLING：取消中
- CANCELLED：已取消（命令启动前就被取消）
- TERMINATED：已中止（命令执行期间被取消）
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置执行任务状态。取值范围：

- PENDING：等待下发
- DELIVERING：下发中
- DELIVER_DELAYED：延时下发
- DELIVER_FAILED：下发失败
- START_FAILED：命令启动失败
- RUNNING：命令运行中
- SUCCESS：命令成功
- FAILED：命令执行失败，执行完退出码不为 0
- TIMEOUT：命令超时
- TASK_TIMEOUT：客户端无响应
- CANCELLING：取消中
- CANCELLED：已取消（命令启动前就被取消）
- TERMINATED：已中止（命令执行期间被取消）
                     * @param _taskStatus 执行任务状态。取值范围：

- PENDING：等待下发
- DELIVERING：下发中
- DELIVER_DELAYED：延时下发
- DELIVER_FAILED：下发失败
- START_FAILED：命令启动失败
- RUNNING：命令运行中
- SUCCESS：命令成功
- FAILED：命令执行失败，执行完退出码不为 0
- TIMEOUT：命令超时
- TASK_TIMEOUT：客户端无响应
- CANCELLING：取消中
- CANCELLED：已取消（命令启动前就被取消）
- TERMINATED：已中止（命令执行期间被取消）
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取执行结果。
                     * @return TaskResult 执行结果。
                     * 
                     */
                    TaskResult GetTaskResult() const;

                    /**
                     * 设置执行结果。
                     * @param _taskResult 执行结果。
                     * 
                     */
                    void SetTaskResult(const TaskResult& _taskResult);

                    /**
                     * 判断参数 TaskResult 是否已赋值
                     * @return TaskResult 是否已赋值
                     * 
                     */
                    bool TaskResultHasBeenSet() const;

                    /**
                     * 获取执行任务开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 执行任务开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置执行任务开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 执行任务开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
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
                     * 获取执行任务结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 执行任务结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置执行任务结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 执行任务结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
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
                     * 获取创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return CreatedTime 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _createdTime 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return UpdatedTime 更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _updatedTime 更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取执行任务所执行的命令详情。
                     * @return CommandDocument 执行任务所执行的命令详情。
                     * 
                     */
                    CommandDocument GetCommandDocument() const;

                    /**
                     * 设置执行任务所执行的命令详情。
                     * @param _commandDocument 执行任务所执行的命令详情。
                     * 
                     */
                    void SetCommandDocument(const CommandDocument& _commandDocument);

                    /**
                     * 判断参数 CommandDocument 是否已赋值
                     * @return CommandDocument 是否已赋值
                     * 
                     */
                    bool CommandDocumentHasBeenSet() const;

                    /**
                     * 获取执行任务失败时的错误信息。
                     * @return ErrorInfo 执行任务失败时的错误信息。
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置执行任务失败时的错误信息。
                     * @param _errorInfo 执行任务失败时的错误信息。
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取调用来源。

- USER：来源于用户调用。
- INVOKER：来源于定时执行。
                     * @return InvocationSource 调用来源。

- USER：来源于用户调用。
- INVOKER：来源于定时执行。
                     * 
                     */
                    std::string GetInvocationSource() const;

                    /**
                     * 设置调用来源。

- USER：来源于用户调用。
- INVOKER：来源于定时执行。
                     * @param _invocationSource 调用来源。

- USER：来源于用户调用。
- INVOKER：来源于定时执行。
                     * 
                     */
                    void SetInvocationSource(const std::string& _invocationSource);

                    /**
                     * 判断参数 InvocationSource 是否已赋值
                     * @return InvocationSource 是否已赋值
                     * 
                     */
                    bool InvocationSourceHasBeenSet() const;

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

- PENDING：等待下发
- DELIVERING：下发中
- DELIVER_DELAYED：延时下发
- DELIVER_FAILED：下发失败
- START_FAILED：命令启动失败
- RUNNING：命令运行中
- SUCCESS：命令成功
- FAILED：命令执行失败，执行完退出码不为 0
- TIMEOUT：命令超时
- TASK_TIMEOUT：客户端无响应
- CANCELLING：取消中
- CANCELLED：已取消（命令启动前就被取消）
- TERMINATED：已中止（命令执行期间被取消）
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
                     * 执行任务开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 执行任务结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 创建时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间。格式为：YYYY-MM-DDThh:mm:ssZ
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

                    /**
                     * 调用来源。

- USER：来源于用户调用。
- INVOKER：来源于定时执行。
                     */
                    std::string m_invocationSource;
                    bool m_invocationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASK_H_
