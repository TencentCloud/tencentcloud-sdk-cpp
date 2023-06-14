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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKSOVERVIEW_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKSOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务概览
                */
                class TasksOverview : public AbstractModel
                {
                public:
                    TasksOverview();
                    ~TasksOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正在排队的任务个数
                     * @return TaskQueuedCount 正在排队的任务个数
                     * 
                     */
                    int64_t GetTaskQueuedCount() const;

                    /**
                     * 设置正在排队的任务个数
                     * @param _taskQueuedCount 正在排队的任务个数
                     * 
                     */
                    void SetTaskQueuedCount(const int64_t& _taskQueuedCount);

                    /**
                     * 判断参数 TaskQueuedCount 是否已赋值
                     * @return TaskQueuedCount 是否已赋值
                     * 
                     */
                    bool TaskQueuedCountHasBeenSet() const;

                    /**
                     * 获取初始化的任务个数
                     * @return TaskInitCount 初始化的任务个数
                     * 
                     */
                    int64_t GetTaskInitCount() const;

                    /**
                     * 设置初始化的任务个数
                     * @param _taskInitCount 初始化的任务个数
                     * 
                     */
                    void SetTaskInitCount(const int64_t& _taskInitCount);

                    /**
                     * 判断参数 TaskInitCount 是否已赋值
                     * @return TaskInitCount 是否已赋值
                     * 
                     */
                    bool TaskInitCountHasBeenSet() const;

                    /**
                     * 获取正在执行的任务个数
                     * @return TaskRunningCount 正在执行的任务个数
                     * 
                     */
                    int64_t GetTaskRunningCount() const;

                    /**
                     * 设置正在执行的任务个数
                     * @param _taskRunningCount 正在执行的任务个数
                     * 
                     */
                    void SetTaskRunningCount(const int64_t& _taskRunningCount);

                    /**
                     * 判断参数 TaskRunningCount 是否已赋值
                     * @return TaskRunningCount 是否已赋值
                     * 
                     */
                    bool TaskRunningCountHasBeenSet() const;

                    /**
                     * 获取当前时间范围的总任务个数
                     * @return TotalTaskCount 当前时间范围的总任务个数
                     * 
                     */
                    int64_t GetTotalTaskCount() const;

                    /**
                     * 设置当前时间范围的总任务个数
                     * @param _totalTaskCount 当前时间范围的总任务个数
                     * 
                     */
                    void SetTotalTaskCount(const int64_t& _totalTaskCount);

                    /**
                     * 判断参数 TotalTaskCount 是否已赋值
                     * @return TotalTaskCount 是否已赋值
                     * 
                     */
                    bool TotalTaskCountHasBeenSet() const;

                private:

                    /**
                     * 正在排队的任务个数
                     */
                    int64_t m_taskQueuedCount;
                    bool m_taskQueuedCountHasBeenSet;

                    /**
                     * 初始化的任务个数
                     */
                    int64_t m_taskInitCount;
                    bool m_taskInitCountHasBeenSet;

                    /**
                     * 正在执行的任务个数
                     */
                    int64_t m_taskRunningCount;
                    bool m_taskRunningCountHasBeenSet;

                    /**
                     * 当前时间范围的总任务个数
                     */
                    int64_t m_totalTaskCount;
                    bool m_totalTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKSOVERVIEW_H_
