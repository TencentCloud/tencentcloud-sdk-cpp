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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSUBMITINFORESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSUBMITINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>
#include <tencentcloud/batch/v20170312/model/Dependence.h>
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
                * DescribeJobSubmitInfo返回参数结构体
                */
                class DescribeJobSubmitInfoResponse : public AbstractModel
                {
                public:
                    DescribeJobSubmitInfoResponse();
                    ~DescribeJobSubmitInfoResponse() = default;
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
                     * 获取作业名称
                     * @return JobName 作业名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取作业描述
                     * @return JobDescription 作业描述
                     * 
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 判断参数 JobDescription 是否已赋值
                     * @return JobDescription 是否已赋值
                     * 
                     */
                    bool JobDescriptionHasBeenSet() const;

                    /**
                     * 获取作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     * @return Priority 作业优先级，任务（Task）和任务实例（TaskInstance）会继承作业优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取任务信息
                     * @return Tasks 任务信息
                     * 
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取依赖信息
                     * @return Dependences 依赖信息
                     * 
                     */
                    std::vector<Dependence> GetDependences() const;

                    /**
                     * 判断参数 Dependences 是否已赋值
                     * @return Dependences 是否已赋值
                     * 
                     */
                    bool DependencesHasBeenSet() const;

                    /**
                     * 获取作业绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 作业绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

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
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 任务信息
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 依赖信息
                     */
                    std::vector<Dependence> m_dependences;
                    bool m_dependencesHasBeenSet;

                    /**
                     * 作业绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBSUBMITINFORESPONSE_H_
