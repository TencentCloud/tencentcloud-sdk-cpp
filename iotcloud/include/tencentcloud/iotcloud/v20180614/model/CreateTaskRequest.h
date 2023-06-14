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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATETASKREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/Task.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CreateTask请求参数结构体
                */
                class CreateTaskRequest : public AbstractModel
                {
                public:
                    CreateTaskRequest();
                    ~CreateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型，取值为 “UpdateShadow” 或者 “PublishMessage”
                     * @return TaskType 任务类型，取值为 “UpdateShadow” 或者 “PublishMessage”
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，取值为 “UpdateShadow” 或者 “PublishMessage”
                     * @param _taskType 任务类型，取值为 “UpdateShadow” 或者 “PublishMessage”
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取执行任务的产品ID
                     * @return ProductId 执行任务的产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置执行任务的产品ID
                     * @param _productId 执行任务的产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取执行任务的设备名的正则表达式
                     * @return DeviceNameFilter 执行任务的设备名的正则表达式
                     * 
                     */
                    std::string GetDeviceNameFilter() const;

                    /**
                     * 设置执行任务的设备名的正则表达式
                     * @param _deviceNameFilter 执行任务的设备名的正则表达式
                     * 
                     */
                    void SetDeviceNameFilter(const std::string& _deviceNameFilter);

                    /**
                     * 判断参数 DeviceNameFilter 是否已赋值
                     * @return DeviceNameFilter 是否已赋值
                     * 
                     */
                    bool DeviceNameFilterHasBeenSet() const;

                    /**
                     * 获取任务开始执行的时间。 取值为 Unix 时间戳，单位秒，且需大于等于当前时间时间戳，0为系统当前时间时间戳，即立即执行，最大为当前时间86400秒后，超过则取值为当前时间86400秒后
                     * @return ScheduleTimeInSeconds 任务开始执行的时间。 取值为 Unix 时间戳，单位秒，且需大于等于当前时间时间戳，0为系统当前时间时间戳，即立即执行，最大为当前时间86400秒后，超过则取值为当前时间86400秒后
                     * 
                     */
                    uint64_t GetScheduleTimeInSeconds() const;

                    /**
                     * 设置任务开始执行的时间。 取值为 Unix 时间戳，单位秒，且需大于等于当前时间时间戳，0为系统当前时间时间戳，即立即执行，最大为当前时间86400秒后，超过则取值为当前时间86400秒后
                     * @param _scheduleTimeInSeconds 任务开始执行的时间。 取值为 Unix 时间戳，单位秒，且需大于等于当前时间时间戳，0为系统当前时间时间戳，即立即执行，最大为当前时间86400秒后，超过则取值为当前时间86400秒后
                     * 
                     */
                    void SetScheduleTimeInSeconds(const uint64_t& _scheduleTimeInSeconds);

                    /**
                     * 判断参数 ScheduleTimeInSeconds 是否已赋值
                     * @return ScheduleTimeInSeconds 是否已赋值
                     * 
                     */
                    bool ScheduleTimeInSecondsHasBeenSet() const;

                    /**
                     * 获取任务描述细节，描述见下 Task
                     * @return Tasks 任务描述细节，描述见下 Task
                     * 
                     */
                    Task GetTasks() const;

                    /**
                     * 设置任务描述细节，描述见下 Task
                     * @param _tasks 任务描述细节，描述见下 Task
                     * 
                     */
                    void SetTasks(const Task& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取最长执行时间，单位秒，被调度后超过此时间仍未有结果则视为任务失败。取值为0-86400，默认为86400
                     * @return MaxExecutionTimeInSeconds 最长执行时间，单位秒，被调度后超过此时间仍未有结果则视为任务失败。取值为0-86400，默认为86400
                     * 
                     */
                    uint64_t GetMaxExecutionTimeInSeconds() const;

                    /**
                     * 设置最长执行时间，单位秒，被调度后超过此时间仍未有结果则视为任务失败。取值为0-86400，默认为86400
                     * @param _maxExecutionTimeInSeconds 最长执行时间，单位秒，被调度后超过此时间仍未有结果则视为任务失败。取值为0-86400，默认为86400
                     * 
                     */
                    void SetMaxExecutionTimeInSeconds(const uint64_t& _maxExecutionTimeInSeconds);

                    /**
                     * 判断参数 MaxExecutionTimeInSeconds 是否已赋值
                     * @return MaxExecutionTimeInSeconds 是否已赋值
                     * 
                     */
                    bool MaxExecutionTimeInSecondsHasBeenSet() const;

                private:

                    /**
                     * 任务类型，取值为 “UpdateShadow” 或者 “PublishMessage”
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 执行任务的产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 执行任务的设备名的正则表达式
                     */
                    std::string m_deviceNameFilter;
                    bool m_deviceNameFilterHasBeenSet;

                    /**
                     * 任务开始执行的时间。 取值为 Unix 时间戳，单位秒，且需大于等于当前时间时间戳，0为系统当前时间时间戳，即立即执行，最大为当前时间86400秒后，超过则取值为当前时间86400秒后
                     */
                    uint64_t m_scheduleTimeInSeconds;
                    bool m_scheduleTimeInSecondsHasBeenSet;

                    /**
                     * 任务描述细节，描述见下 Task
                     */
                    Task m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 最长执行时间，单位秒，被调度后超过此时间仍未有结果则视为任务失败。取值为0-86400，默认为86400
                     */
                    uint64_t m_maxExecutionTimeInSeconds;
                    bool m_maxExecutionTimeInSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATETASKREQUEST_H_
