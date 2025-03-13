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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_TASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_TASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询复杂任务详情返回结果
                */
                class TaskData : public AbstractModel
                {
                public:
                    TaskData();
                    ~TaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取任务状态1:NEW,2:RUNNING,3:COMPLETED ,4:FAILED
                     * @return Status 任务状态1:NEW,2:RUNNING,3:COMPLETED ,4:FAILED
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态1:NEW,2:RUNNING,3:COMPLETED ,4:FAILED
                     * @param _status 任务状态1:NEW,2:RUNNING,3:COMPLETED ,4:FAILED
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
                     * 获取失败原因
                     * @return FailReason 失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
                     * @param _failReason 失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取进度（0-1）
                     * @return Progress 进度（0-1）
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置进度（0-1）
                     * @param _progress 进度（0-1）
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务操作类型，批量任务类型以Batch开头
                     * @return Action 任务操作类型，批量任务类型以Batch开头
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置任务操作类型，批量任务类型以Batch开头
                     * @param _action 任务操作类型，批量任务类型以Batch开头
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取操作类型中文描述
                     * @return ActionZhDesc 操作类型中文描述
                     * 
                     */
                    std::string GetActionZhDesc() const;

                    /**
                     * 设置操作类型中文描述
                     * @param _actionZhDesc 操作类型中文描述
                     * 
                     */
                    void SetActionZhDesc(const std::string& _actionZhDesc);

                    /**
                     * 判断参数 ActionZhDesc 是否已赋值
                     * @return ActionZhDesc 是否已赋值
                     * 
                     */
                    bool ActionZhDescHasBeenSet() const;

                    /**
                     * 获取任务类型 1.简单 2.复杂 3.子任务
                     * @return TaskType 任务类型 1.简单 2.复杂 3.子任务
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型 1.简单 2.复杂 3.子任务
                     * @param _taskType 任务类型 1.简单 2.复杂 3.子任务
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务资源id（复杂任务该字段无效）
                     * @return ResourceId 任务资源id（复杂任务该字段无效）
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置任务资源id（复杂任务该字段无效）
                     * @param _resourceId 任务资源id（复杂任务该字段无效）
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取总任务数（仅复杂任务有效）
                     * @return Total 总任务数（仅复杂任务有效）
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总任务数（仅复杂任务有效）
                     * @param _total 总任务数（仅复杂任务有效）
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取成功任务数（仅复杂任务有效）
                     * @return SuccessCount 成功任务数（仅复杂任务有效）
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置成功任务数（仅复杂任务有效）
                     * @param _successCount 成功任务数（仅复杂任务有效）
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败任务数（仅复杂任务有效）
                     * @return FailCount 失败任务数（仅复杂任务有效）
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置失败任务数（仅复杂任务有效）
                     * @param _failCount 失败任务数（仅复杂任务有效）
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取运行任务数（仅复杂任务有效）
                     * @return RunningCount 运行任务数（仅复杂任务有效）
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 设置运行任务数（仅复杂任务有效）
                     * @param _runningCount 运行任务数（仅复杂任务有效）
                     * 
                     */
                    void SetRunningCount(const int64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取启动任务时间
                     * @return StartedAt 启动任务时间
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置启动任务时间
                     * @param _startedAt 启动任务时间
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取创建任务时间
                     * @return CreatedAt 创建任务时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建任务时间
                     * @param _createdAt 创建任务时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新任务时间
                     * @return UpdatedAt 更新任务时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新任务时间
                     * @param _updatedAt 更新任务时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取任务运行时间，单位ms
                     * @return Runtime 任务运行时间，单位ms
                     * 
                     */
                    int64_t GetRuntime() const;

                    /**
                     * 设置任务运行时间，单位ms
                     * @param _runtime 任务运行时间，单位ms
                     * 
                     */
                    void SetRuntime(const int64_t& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取 通道名称
                     * @return ChannelName  通道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置 通道名称
                     * @param _channelName  通道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态1:NEW,2:RUNNING,3:COMPLETED ,4:FAILED
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 进度（0-1）
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务操作类型，批量任务类型以Batch开头
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 操作类型中文描述
                     */
                    std::string m_actionZhDesc;
                    bool m_actionZhDescHasBeenSet;

                    /**
                     * 任务类型 1.简单 2.复杂 3.子任务
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务资源id（复杂任务该字段无效）
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 总任务数（仅复杂任务有效）
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 成功任务数（仅复杂任务有效）
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败任务数（仅复杂任务有效）
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 运行任务数（仅复杂任务有效）
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * 启动任务时间
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 创建任务时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新任务时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 任务运行时间，单位ms
                     */
                    int64_t m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     *  通道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_TASKDATA_H_
