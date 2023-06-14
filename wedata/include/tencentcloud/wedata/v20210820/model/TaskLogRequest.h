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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TaskLog请求参数结构体
                */
                class TaskLogRequest : public AbstractModel
                {
                public:
                    TaskLogRequest();
                    ~TaskLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取起始时间戳，单位毫秒
                     * @return StartTime 起始时间戳，单位毫秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置起始时间戳，单位毫秒
                     * @param _startTime 起始时间戳，单位毫秒
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳，单位毫秒
                     * @return EndTime 结束时间戳，单位毫秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳，单位毫秒
                     * @param _endTime 结束时间戳，单位毫秒
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取拉取日志数量，默认100
                     * @return Limit 拉取日志数量，默认100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置拉取日志数量，默认100
                     * @param _limit 拉取日志数量，默认100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取日志排序 desc 倒序 asc 顺序
                     * @return OrderType 日志排序 desc 倒序 asc 顺序
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置日志排序 desc 倒序 asc 顺序
                     * @param _orderType 日志排序 desc 倒序 asc 顺序
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取实时任务 201   离线任务 202  默认实时任务
                     * @return TaskType 实时任务 201   离线任务 202  默认实时任务
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置实时任务 201   离线任务 202  默认实时任务
                     * @param _taskType 实时任务 201   离线任务 202  默认实时任务
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 起始时间戳，单位毫秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳，单位毫秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 拉取日志数量，默认100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 日志排序 desc 倒序 asc 顺序
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 实时任务 201   离线任务 202  默认实时任务
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGREQUEST_H_
