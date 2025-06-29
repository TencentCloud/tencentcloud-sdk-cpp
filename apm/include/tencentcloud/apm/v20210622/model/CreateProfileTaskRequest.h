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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEPROFILETASKREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEPROFILETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateProfileTask请求参数结构体
                */
                class CreateProfileTaskRequest : public AbstractModel
                {
                public:
                    CreateProfileTaskRequest();
                    ~CreateProfileTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称
                     * @return ServiceName 应用名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名称
                     * @param _serviceName 应用名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取APM业务系统ID
                     * @return InstanceId APM业务系统ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置APM业务系统ID
                     * @param _instanceId APM业务系统ID
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
                     * 获取应用实例（在线）
                     * @return ServiceInstance 应用实例（在线）
                     * 
                     */
                    std::string GetServiceInstance() const;

                    /**
                     * 设置应用实例（在线）
                     * @param _serviceInstance 应用实例（在线）
                     * 
                     */
                    void SetServiceInstance(const std::string& _serviceInstance);

                    /**
                     * 判断参数 ServiceInstance 是否已赋值
                     * @return ServiceInstance 是否已赋值
                     * 
                     */
                    bool ServiceInstanceHasBeenSet() const;

                    /**
                     * 获取事件类型（cpu、alloc）
                     * @return Event 事件类型（cpu、alloc）
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置事件类型（cpu、alloc）
                     * @param _event 事件类型（cpu、alloc）
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取任务持续时长(单位：毫秒)，范围限制在5~180秒
                     * @return Duration 任务持续时长(单位：毫秒)，范围限制在5~180秒
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置任务持续时长(单位：毫秒)，范围限制在5~180秒
                     * @param _duration 任务持续时长(单位：毫秒)，范围限制在5~180秒
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取执行次数，范围限制在1~100次
                     * @return AllTimes 执行次数，范围限制在1~100次
                     * 
                     */
                    int64_t GetAllTimes() const;

                    /**
                     * 设置执行次数，范围限制在1~100次
                     * @param _allTimes 执行次数，范围限制在1~100次
                     * 
                     */
                    void SetAllTimes(const int64_t& _allTimes);

                    /**
                     * 判断参数 AllTimes 是否已赋值
                     * @return AllTimes 是否已赋值
                     * 
                     */
                    bool AllTimesHasBeenSet() const;

                    /**
                     * 获取开始时间戳，0代表从当前开始(单位：秒)
                     * @return StartTime 开始时间戳，0代表从当前开始(单位：秒)
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳，0代表从当前开始(单位：秒)
                     * @param _startTime 开始时间戳，0代表从当前开始(单位：秒)
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
                     * 获取任务执行间隔(单位：毫秒)，范围限制在10~600秒，不可小于1.5倍的Duration
                     * @return TaskInterval 任务执行间隔(单位：毫秒)，范围限制在10~600秒，不可小于1.5倍的Duration
                     * 
                     */
                    int64_t GetTaskInterval() const;

                    /**
                     * 设置任务执行间隔(单位：毫秒)，范围限制在10~600秒，不可小于1.5倍的Duration
                     * @param _taskInterval 任务执行间隔(单位：毫秒)，范围限制在10~600秒，不可小于1.5倍的Duration
                     * 
                     */
                    void SetTaskInterval(const int64_t& _taskInterval);

                    /**
                     * 判断参数 TaskInterval 是否已赋值
                     * @return TaskInterval 是否已赋值
                     * 
                     */
                    bool TaskIntervalHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * APM业务系统ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用实例（在线）
                     */
                    std::string m_serviceInstance;
                    bool m_serviceInstanceHasBeenSet;

                    /**
                     * 事件类型（cpu、alloc）
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 任务持续时长(单位：毫秒)，范围限制在5~180秒
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 执行次数，范围限制在1~100次
                     */
                    int64_t m_allTimes;
                    bool m_allTimesHasBeenSet;

                    /**
                     * 开始时间戳，0代表从当前开始(单位：秒)
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务执行间隔(单位：毫秒)，范围限制在10~600秒，不可小于1.5倍的Duration
                     */
                    int64_t m_taskInterval;
                    bool m_taskIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEPROFILETASKREQUEST_H_
