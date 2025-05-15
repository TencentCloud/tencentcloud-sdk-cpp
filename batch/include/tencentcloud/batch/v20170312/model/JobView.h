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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/TaskMetrics.h>
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
                * 作业信息
                */
                class JobView : public AbstractModel
                {
                public:
                    JobView();
                    ~JobView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * @return JobId 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * @param _jobId 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

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
                     * 设置作业名称
                     * @param _jobName 作业名称
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
                     * 获取作业状态:
- SUBMITTED：已提交；
- PENDING：等待中；
- RUNNABLE：可运行；
- STARTING：启动中；
- RUNNING：运行中；
- SUCCEED：成功；
- FAILED：失败；
- FAILED_INTERRUPTED：失败后保留实例。
                     * @return JobState 作业状态:
- SUBMITTED：已提交；
- PENDING：等待中；
- RUNNABLE：可运行；
- STARTING：启动中；
- RUNNING：运行中；
- SUCCEED：成功；
- FAILED：失败；
- FAILED_INTERRUPTED：失败后保留实例。
                     * 
                     */
                    std::string GetJobState() const;

                    /**
                     * 设置作业状态:
- SUBMITTED：已提交；
- PENDING：等待中；
- RUNNABLE：可运行；
- STARTING：启动中；
- RUNNING：运行中；
- SUCCEED：成功；
- FAILED：失败；
- FAILED_INTERRUPTED：失败后保留实例。
                     * @param _jobState 作业状态:
- SUBMITTED：已提交；
- PENDING：等待中；
- RUNNABLE：可运行；
- STARTING：启动中；
- RUNNING：运行中；
- SUCCEED：成功；
- FAILED：失败；
- FAILED_INTERRUPTED：失败后保留实例。
                     * 
                     */
                    void SetJobState(const std::string& _jobState);

                    /**
                     * 判断参数 JobState 是否已赋值
                     * @return JobState 是否已赋值
                     * 
                     */
                    bool JobStateHasBeenSet() const;

                    /**
                     * 获取作业优先级
                     * @return Priority 作业优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置作业优先级
                     * @param _priority 作业优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Placement 位置信息
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置位置信息
                     * @param _placement 位置信息
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return CreateTime 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _createTime 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @return EndTime 结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * @param _endTime 结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务统计指标
                     * @return TaskMetrics 任务统计指标
                     * 
                     */
                    TaskMetrics GetTaskMetrics() const;

                    /**
                     * 设置任务统计指标
                     * @param _taskMetrics 任务统计指标
                     * 
                     */
                    void SetTaskMetrics(const TaskMetrics& _taskMetrics);

                    /**
                     * 判断参数 TaskMetrics 是否已赋值
                     * @return TaskMetrics 是否已赋值
                     * 
                     */
                    bool TaskMetricsHasBeenSet() const;

                    /**
                     * 获取作业绑定的标签列表。
                     * @return Tags 作业绑定的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置作业绑定的标签列表。
                     * @param _tags 作业绑定的标签列表。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 作业状态:
- SUBMITTED：已提交；
- PENDING：等待中；
- RUNNABLE：可运行；
- STARTING：启动中；
- RUNNING：运行中；
- SUCCEED：成功；
- FAILED：失败；
- FAILED_INTERRUPTED：失败后保留实例。
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * 作业优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 结束时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务统计指标
                     */
                    TaskMetrics m_taskMetrics;
                    bool m_taskMetricsHasBeenSet;

                    /**
                     * 作业绑定的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_
