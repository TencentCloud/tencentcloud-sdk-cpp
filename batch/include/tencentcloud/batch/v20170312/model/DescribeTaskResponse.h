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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/TaskInstanceView.h>
#include <tencentcloud/batch/v20170312/model/TaskInstanceMetrics.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTask返回参数结构体
                */
                class DescribeTaskResponse : public AbstractModel
                {
                public:
                    DescribeTaskResponse();
                    ~DescribeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return TaskState 任务状态
                     * 
                     */
                    std::string GetTaskState() const;

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
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
                     * 获取任务实例总数
                     * @return TaskInstanceTotalCount 任务实例总数
                     * 
                     */
                    int64_t GetTaskInstanceTotalCount() const;

                    /**
                     * 判断参数 TaskInstanceTotalCount 是否已赋值
                     * @return TaskInstanceTotalCount 是否已赋值
                     * 
                     */
                    bool TaskInstanceTotalCountHasBeenSet() const;

                    /**
                     * 获取任务实例信息
                     * @return TaskInstanceSet 任务实例信息
                     * 
                     */
                    std::vector<TaskInstanceView> GetTaskInstanceSet() const;

                    /**
                     * 判断参数 TaskInstanceSet 是否已赋值
                     * @return TaskInstanceSet 是否已赋值
                     * 
                     */
                    bool TaskInstanceSetHasBeenSet() const;

                    /**
                     * 获取任务实例统计指标
                     * @return TaskInstanceMetrics 任务实例统计指标
                     * 
                     */
                    TaskInstanceMetrics GetTaskInstanceMetrics() const;

                    /**
                     * 判断参数 TaskInstanceMetrics 是否已赋值
                     * @return TaskInstanceMetrics 是否已赋值
                     * 
                     */
                    bool TaskInstanceMetricsHasBeenSet() const;

                private:

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_taskState;
                    bool m_taskStateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务实例总数
                     */
                    int64_t m_taskInstanceTotalCount;
                    bool m_taskInstanceTotalCountHasBeenSet;

                    /**
                     * 任务实例信息
                     */
                    std::vector<TaskInstanceView> m_taskInstanceSet;
                    bool m_taskInstanceSetHasBeenSet;

                    /**
                     * 任务实例统计指标
                     */
                    TaskInstanceMetrics m_taskInstanceMetrics;
                    bool m_taskInstanceMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBETASKRESPONSE_H_
