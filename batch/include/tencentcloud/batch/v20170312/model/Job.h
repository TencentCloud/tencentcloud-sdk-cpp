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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>
#include <tencentcloud/batch/v20170312/model/Dependence.h>
#include <tencentcloud/batch/v20170312/model/Notification.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 作业
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务信息
                     * @return Tasks 任务信息
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 设置任务信息
                     * @param Tasks 任务信息
                     */
                    void SetTasks(const std::vector<Task>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取作业名称
                     * @return JobName 作业名称
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置作业名称
                     * @param JobName 作业名称
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取作业描述
                     * @return JobDescription 作业描述
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置作业描述
                     * @param JobDescription 作业描述
                     */
                    void SetJobDescription(const std::string& _jobDescription);

                    /**
                     * 判断参数 JobDescription 是否已赋值
                     * @return JobDescription 是否已赋值
                     */
                    bool JobDescriptionHasBeenSet() const;

                    /**
                     * 获取作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     * @return Priority 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     * @param Priority 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取依赖信息
                     * @return Dependences 依赖信息
                     */
                    std::vector<Dependence> GetDependences() const;

                    /**
                     * 设置依赖信息
                     * @param Dependences 依赖信息
                     */
                    void SetDependences(const std::vector<Dependence>& _dependences);

                    /**
                     * 判断参数 Dependences 是否已赋值
                     * @return Dependences 是否已赋值
                     */
                    bool DependencesHasBeenSet() const;

                    /**
                     * 获取通知信息
                     * @return Notifications 通知信息
                     */
                    std::vector<Notification> GetNotifications() const;

                    /**
                     * 设置通知信息
                     * @param Notifications 通知信息
                     */
                    void SetNotifications(const std::vector<Notification>& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     * @return TaskExecutionDependOn 对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     */
                    std::string GetTaskExecutionDependOn() const;

                    /**
                     * 设置对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     * @param TaskExecutionDependOn 对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     */
                    void SetTaskExecutionDependOn(const std::string& _taskExecutionDependOn);

                    /**
                     * 判断参数 TaskExecutionDependOn 是否已赋值
                     * @return TaskExecutionDependOn 是否已赋值
                     */
                    bool TaskExecutionDependOnHasBeenSet() const;

                    /**
                     * 获取表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     * @return StateIfCreateCvmFailed 表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     */
                    std::string GetStateIfCreateCvmFailed() const;

                    /**
                     * 设置表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     * @param StateIfCreateCvmFailed 表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     */
                    void SetStateIfCreateCvmFailed(const std::string& _stateIfCreateCvmFailed);

                    /**
                     * 判断参数 StateIfCreateCvmFailed 是否已赋值
                     * @return StateIfCreateCvmFailed 是否已赋值
                     */
                    bool StateIfCreateCvmFailedHasBeenSet() const;

                private:

                    /**
                     * 任务信息
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 作业名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 作业描述
                     */
                    std::string m_jobDescription;
                    bool m_jobDescriptionHasBeenSet;

                    /**
                     * 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 依赖信息
                     */
                    std::vector<Dependence> m_dependences;
                    bool m_dependencesHasBeenSet;

                    /**
                     * 通知信息
                     */
                    std::vector<Notification> m_notifications;
                    bool m_notificationsHasBeenSet;

                    /**
                     * 对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     */
                    std::string m_taskExecutionDependOn;
                    bool m_taskExecutionDependOnHasBeenSet;

                    /**
                     * 表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     */
                    std::string m_stateIfCreateCvmFailed;
                    bool m_stateIfCreateCvmFailedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_
