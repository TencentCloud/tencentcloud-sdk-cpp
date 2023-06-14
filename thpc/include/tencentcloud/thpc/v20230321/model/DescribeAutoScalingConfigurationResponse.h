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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/QueueConfigOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeAutoScalingConfiguration返回参数结构体
                */
                class DescribeAutoScalingConfigurationResponse : public AbstractModel
                {
                public:
                    DescribeAutoScalingConfigurationResponse();
                    ~DescribeAutoScalingConfigurationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取任务连续等待时间，队列的任务处于连续等待的时间。单位秒。
                     * @return ExpansionBusyTime 任务连续等待时间，队列的任务处于连续等待的时间。单位秒。
                     * 
                     */
                    int64_t GetExpansionBusyTime() const;

                    /**
                     * 判断参数 ExpansionBusyTime 是否已赋值
                     * @return ExpansionBusyTime 是否已赋值
                     * 
                     */
                    bool ExpansionBusyTimeHasBeenSet() const;

                    /**
                     * 获取节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。
                     * @return ShrinkIdleTime 节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。
                     * 
                     */
                    int64_t GetShrinkIdleTime() const;

                    /**
                     * 判断参数 ShrinkIdleTime 是否已赋值
                     * @return ShrinkIdleTime 是否已赋值
                     * 
                     */
                    bool ShrinkIdleTimeHasBeenSet() const;

                    /**
                     * 获取扩容队列配置概览列表。
                     * @return QueueConfigs 扩容队列配置概览列表。
                     * 
                     */
                    std::vector<QueueConfigOverview> GetQueueConfigs() const;

                    /**
                     * 判断参数 QueueConfigs 是否已赋值
                     * @return QueueConfigs 是否已赋值
                     * 
                     */
                    bool QueueConfigsHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 任务连续等待时间，队列的任务处于连续等待的时间。单位秒。
                     */
                    int64_t m_expansionBusyTime;
                    bool m_expansionBusyTimeHasBeenSet;

                    /**
                     * 节点连续空闲（未运行作业）时间，一个节点连续处于空闲状态时间。
                     */
                    int64_t m_shrinkIdleTime;
                    bool m_shrinkIdleTimeHasBeenSet;

                    /**
                     * 扩容队列配置概览列表。
                     */
                    std::vector<QueueConfigOverview> m_queueConfigs;
                    bool m_queueConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEAUTOSCALINGCONFIGURATIONRESPONSE_H_
