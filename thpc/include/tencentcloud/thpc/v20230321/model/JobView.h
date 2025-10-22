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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_JOBVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_JOBVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 作业概览信息
                */
                class JobView : public AbstractModel
                {
                public:
                    JobView();
                    ~JobView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
                     * @param _jobId 作业ID
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
                     * 获取作业描述
                     * @return JobDescription 作业描述
                     * 
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置作业描述
                     * @param _jobDescription 作业描述
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
                     * 获取作业优先级
                     * @return Priority 作业优先级
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置作业优先级
                     * @param _priority 作业优先级
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
                     * 获取作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS, 
FAILED

                     * @return JobState 作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS, 
FAILED

                     * 
                     */
                    std::string GetJobState() const;

                    /**
                     * 设置作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS, 
FAILED

                     * @param _jobState 作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS, 
FAILED

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
                     * 获取作业所属集群ID
                     * @return ClusterId 作业所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置作业所属集群ID
                     * @param _clusterId 作业所属集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取作业所属队列名称
                     * @return QueueName 作业所属队列名称
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置作业所属队列名称
                     * @param _queueName 作业所属队列名称
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取完成作业任务所需资源
                     * @return OccupyResources 完成作业任务所需资源
                     * 
                     */
                    std::string GetOccupyResources() const;

                    /**
                     * 设置完成作业任务所需资源
                     * @param _occupyResources 完成作业任务所需资源
                     * 
                     */
                    void SetOccupyResources(const std::string& _occupyResources);

                    /**
                     * 判断参数 OccupyResources 是否已赋值
                     * @return OccupyResources 是否已赋值
                     * 
                     */
                    bool OccupyResourcesHasBeenSet() const;

                    /**
                     * 获取作业任务创建时间
                     * @return CreateTime 作业任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置作业任务创建时间
                     * @param _createTime 作业任务创建时间
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
                     * 获取作业任务结束时间
                     * @return EndTime 作业任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置作业任务结束时间
                     * @param _endTime 作业任务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 作业优先级
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS, 
FAILED

                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * 作业所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 作业所属队列名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 完成作业任务所需资源
                     */
                    std::string m_occupyResources;
                    bool m_occupyResourcesHasBeenSet;

                    /**
                     * 作业任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 作业任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_JOBVIEW_H_
