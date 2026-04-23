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
                     * 获取<p>作业ID</p>
                     * @return JobId <p>作业ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业ID</p>
                     * @param _jobId <p>作业ID</p>
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
                     * 获取<p>作业名称</p>
                     * @return JobName <p>作业名称</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>作业名称</p>
                     * @param _jobName <p>作业名称</p>
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
                     * 获取<p>作业描述</p>
                     * @return JobDescription <p>作业描述</p>
                     * 
                     */
                    std::string GetJobDescription() const;

                    /**
                     * 设置<p>作业描述</p>
                     * @param _jobDescription <p>作业描述</p>
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
                     * 获取<p>作业创建者</p>
                     * @return Creator <p>作业创建者</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>作业创建者</p>
                     * @param _creator <p>作业创建者</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>作业优先级</p>
                     * @return Priority <p>作业优先级</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>作业优先级</p>
                     * @param _priority <p>作业优先级</p>
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
                     * 获取<p>作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS,<br>FAILED</p>
                     * @return JobState <p>作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS,<br>FAILED</p>
                     * 
                     */
                    std::string GetJobState() const;

                    /**
                     * 设置<p>作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS,<br>FAILED</p>
                     * @param _jobState <p>作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS,<br>FAILED</p>
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
                     * 获取<p>作业所属集群ID</p>
                     * @return ClusterId <p>作业所属集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>作业所属集群ID</p>
                     * @param _clusterId <p>作业所属集群ID</p>
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
                     * 获取<p>作业所属队列名称</p>
                     * @return QueueName <p>作业所属队列名称</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>作业所属队列名称</p>
                     * @param _queueName <p>作业所属队列名称</p>
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
                     * 获取<p>完成作业任务所需资源</p>
                     * @return OccupyResources <p>完成作业任务所需资源</p>
                     * 
                     */
                    std::string GetOccupyResources() const;

                    /**
                     * 设置<p>完成作业任务所需资源</p>
                     * @param _occupyResources <p>完成作业任务所需资源</p>
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
                     * 获取<p>作业任务创建时间</p>
                     * @return CreateTime <p>作业任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>作业任务创建时间</p>
                     * @param _createTime <p>作业任务创建时间</p>
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
                     * 获取<p>作业任务结束时间</p>
                     * @return EndTime <p>作业任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>作业任务结束时间</p>
                     * @param _endTime <p>作业任务结束时间</p>
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
                     * <p>作业ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>作业名称</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>作业描述</p>
                     */
                    std::string m_jobDescription;
                    bool m_jobDescriptionHasBeenSet;

                    /**
                     * <p>作业创建者</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>作业优先级</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>作业状态，包括CREATED, QUEING, STARTNG, RUNING, TERMINATING, TERMINATED, SUCCESS,<br>FAILED</p>
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * <p>作业所属集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>作业所属队列名称</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>完成作业任务所需资源</p>
                     */
                    std::string m_occupyResources;
                    bool m_occupyResourcesHasBeenSet;

                    /**
                     * <p>作业任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>作业任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_JOBVIEW_H_
