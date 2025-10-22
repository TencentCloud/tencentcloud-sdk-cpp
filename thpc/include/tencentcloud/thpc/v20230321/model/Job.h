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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_JOB_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Task.h>
#include <tencentcloud/thpc/v20230321/model/TaskDependence.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 提交Job作业信息
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务配置信息。
                     * @return Tasks 任务配置信息。
                     * 
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 设置任务配置信息。
                     * @param _tasks 任务配置信息。
                     * 
                     */
                    void SetTasks(const std::vector<Task>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取作业名称。
                     * @return JobName 作业名称。
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置作业名称。
                     * @param _jobName 作业名称。
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取作业描述。
                     * @return JobDescription 作业描述。
                     * 
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置作业描述。
                     * @param _jobDescription 作业描述。
                     * 
                     */
                    void SetJobDescription(const std::string& _jobDescription);

                    /**
                     * 判断参数 JobDescription 是否已赋值
                     * @return JobDescription 是否已赋值
                     * 
                     */
                    bool JobDescriptionHasBeenSet() const;

                    /**
                     * 获取作业优先级，数值越大，优先级越高，数值范围1～100。
                     * @return Priority 作业优先级，数值越大，优先级越高，数值范围1～100。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置作业优先级，数值越大，优先级越高，数值范围1～100。
                     * @param _priority 作业优先级，数值越大，优先级越高，数值范围1～100。
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取描述任务的依赖关系，DAG有向无环图。
                     * @return TaskDependencies 描述任务的依赖关系，DAG有向无环图。
                     * 
                     */
                    std::vector<TaskDependence> GetTaskDependencies() const;

                    /**
                     * 设置描述任务的依赖关系，DAG有向无环图。
                     * @param _taskDependencies 描述任务的依赖关系，DAG有向无环图。
                     * 
                     */
                    void SetTaskDependencies(const std::vector<TaskDependence>& _taskDependencies);

                    /**
                     * 判断参数 TaskDependencies 是否已赋值
                     * @return TaskDependencies 是否已赋值
                     * 
                     */
                    bool TaskDependenciesHasBeenSet() const;

                private:

                    /**
                     * 任务配置信息。
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 作业名称。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 作业描述。
                     */
                    std::string m_jobDescription;
                    bool m_jobDescriptionHasBeenSet;

                    /**
                     * 作业优先级，数值越大，优先级越高，数值范围1～100。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 描述任务的依赖关系，DAG有向无环图。
                     */
                    std::vector<TaskDependence> m_taskDependencies;
                    bool m_taskDependenciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_JOB_H_
