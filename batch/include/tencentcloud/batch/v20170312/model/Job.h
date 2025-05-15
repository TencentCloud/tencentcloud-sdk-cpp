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
#include <tencentcloud/batch/v20170312/model/Tag.h>


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
                     * 
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 设置任务信息
                     * @param _tasks 任务信息
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
                     * 获取作业名称; 字符串长度限制60.
                     * @return JobName 作业名称; 字符串长度限制60.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置作业名称; 字符串长度限制60.
                     * @param _jobName 作业名称; 字符串长度限制60.
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
                     * 获取作业描述；字符串长度限制200.
                     * @return JobDescription 作业描述；字符串长度限制200.
                     * 
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置作业描述；字符串长度限制200.
                     * @param _jobDescription 作业描述；字符串长度限制200.
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
                     * 获取作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级；范围0～100，数值越大，优先级越高。
                     * @return Priority 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级；范围0～100，数值越大，优先级越高。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级；范围0～100，数值越大，优先级越高。
                     * @param _priority 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级；范围0～100，数值越大，优先级越高。
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
                     * 获取依赖信息
                     * @return Dependences 依赖信息
                     * 
                     */
                    std::vector<Dependence> GetDependences() const;

                    /**
                     * 设置依赖信息
                     * @param _dependences 依赖信息
                     * 
                     */
                    void SetDependences(const std::vector<Dependence>& _dependences);

                    /**
                     * 判断参数 Dependences 是否已赋值
                     * @return Dependences 是否已赋值
                     * 
                     */
                    bool DependencesHasBeenSet() const;

                    /**
                     * 获取通知信息
                     * @return Notifications 通知信息
                     * 
                     */
                    std::vector<Notification> GetNotifications() const;

                    /**
                     * 设置通知信息
                     * @param _notifications 通知信息
                     * 
                     */
                    void SetNotifications(const std::vector<Notification>& _notifications);

                    /**
                     * 判断参数 Notifications 是否已赋值
                     * @return Notifications 是否已赋值
                     * 
                     */
                    bool NotificationsHasBeenSet() const;

                    /**
                     * 获取对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     * @return TaskExecutionDependOn 对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     * 
                     */
                    std::string GetTaskExecutionDependOn() const;

                    /**
                     * 设置对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     * @param _taskExecutionDependOn 对于存在依赖关系的任务中，后序任务执行对于前序任务的依赖条件。取值范围包括 PRE_TASK_SUCCEED，PRE_TASK_AT_LEAST_PARTLY_SUCCEED，PRE_TASK_FINISHED，默认值为PRE_TASK_SUCCEED。
                     * 
                     */
                    void SetTaskExecutionDependOn(const std::string& _taskExecutionDependOn);

                    /**
                     * 判断参数 TaskExecutionDependOn 是否已赋值
                     * @return TaskExecutionDependOn 是否已赋值
                     * 
                     */
                    bool TaskExecutionDependOnHasBeenSet() const;

                    /**
                     * 获取表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     * @return StateIfCreateCvmFailed 表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     * 
                     */
                    std::string GetStateIfCreateCvmFailed() const;

                    /**
                     * 设置表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     * @param _stateIfCreateCvmFailed 表示创建 CVM 失败按照何种策略处理。取值范围包括 FAILED，RUNNABLE。FAILED 表示创建 CVM 失败按照一次执行失败处理，RUNNABLE 表示创建 CVM 失败按照继续等待处理。默认值为FAILED。StateIfCreateCvmFailed对于提交的指定计算环境的作业无效。
                     * 
                     */
                    void SetStateIfCreateCvmFailed(const std::string& _stateIfCreateCvmFailed);

                    /**
                     * 判断参数 StateIfCreateCvmFailed 是否已赋值
                     * @return StateIfCreateCvmFailed 是否已赋值
                     * 
                     */
                    bool StateIfCreateCvmFailedHasBeenSet() const;

                    /**
                     * 获取标签列表。通过指定该参数可以支持绑定标签到作业。每个作业最多绑定10个标签。
                     * @return Tags 标签列表。通过指定该参数可以支持绑定标签到作业。每个作业最多绑定10个标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表。通过指定该参数可以支持绑定标签到作业。每个作业最多绑定10个标签。
                     * @param _tags 标签列表。通过指定该参数可以支持绑定标签到作业。每个作业最多绑定10个标签。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * @return NotificationTarget 表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * 
                     */
                    std::string GetNotificationTarget() const;

                    /**
                     * 设置表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * @param _notificationTarget 表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     * 
                     */
                    void SetNotificationTarget(const std::string& _notificationTarget);

                    /**
                     * 判断参数 NotificationTarget 是否已赋值
                     * @return NotificationTarget 是否已赋值
                     * 
                     */
                    bool NotificationTargetHasBeenSet() const;

                private:

                    /**
                     * 任务信息
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 作业名称; 字符串长度限制60.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 作业描述；字符串长度限制200.
                     */
                    std::string m_jobDescription;
                    bool m_jobDescriptionHasBeenSet;

                    /**
                     * 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级；范围0～100，数值越大，优先级越高。
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

                    /**
                     * 标签列表。通过指定该参数可以支持绑定标签到作业。每个作业最多绑定10个标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 表示通知信息的通知目标类型。
取值范围：CMQ，TDMQ_CMQ。
CMQ:表示向腾讯云CMQ发送消息。
TDMQ_CMQ：表示向腾讯云TDMQ_CMQ发送消息。<br/>默认值为CMQ。<br/>注：腾讯云计划于2022年6月前正式下线消息队列 CMQ，建议使用TDMQ_CMQ。参考文档：[CMQ迁移到TDMQ_CMQ](https://cloud.tencent.com/document/product/406/60860)
                     */
                    std::string m_notificationTarget;
                    bool m_notificationTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_JOB_H_
