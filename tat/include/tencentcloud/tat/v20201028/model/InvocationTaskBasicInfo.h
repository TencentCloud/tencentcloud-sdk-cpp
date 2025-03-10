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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASKBASICINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASKBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 执行活动任务简介。
                */
                class InvocationTaskBasicInfo : public AbstractModel
                {
                public:
                    InvocationTaskBasicInfo();
                    ~InvocationTaskBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                private:

                    /**
                     * 执行任务ID。
                     */
                    std::string m_invocationTaskId;
                    bool m_invocationTaskIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOCATIONTASKBASICINFO_H_
