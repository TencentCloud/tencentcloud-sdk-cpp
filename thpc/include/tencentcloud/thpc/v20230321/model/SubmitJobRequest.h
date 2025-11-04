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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SUBMITJOBREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SUBMITJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Job.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * SubmitJob请求参数结构体
                */
                class SubmitJobRequest : public AbstractModel
                {
                public:
                    SubmitJobRequest();
                    ~SubmitJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取作业任务参数配置
                     * @return Job 作业任务参数配置
                     * 
                     */
                    Job GetJob() const;

                    /**
                     * 设置作业任务参数配置
                     * @param _job 作业任务参数配置
                     * 
                     */
                    void SetJob(const Job& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取队列名称。不指定则为默认队列：
SLURM默认队列为：compute。 
SGE默认队列为：all.q。
                     * @return QueueName 队列名称。不指定则为默认队列：
SLURM默认队列为：compute。 
SGE默认队列为：all.q。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称。不指定则为默认队列：
SLURM默认队列为：compute。 
SGE默认队列为：all.q。
                     * @param _queueName 队列名称。不指定则为默认队列：
SLURM默认队列为：compute。 
SGE默认队列为：all.q。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 作业任务参数配置
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 队列名称。不指定则为默认队列：
SLURM默认队列为：compute。 
SGE默认队列为：all.q。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SUBMITJOBREQUEST_H_
