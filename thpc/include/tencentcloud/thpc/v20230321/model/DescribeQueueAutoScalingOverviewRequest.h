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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEQUEUEAUTOSCALINGOVERVIEWREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEQUEUEAUTOSCALINGOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeQueueAutoScalingOverview请求参数结构体
                */
                class DescribeQueueAutoScalingOverviewRequest : public AbstractModel
                {
                public:
                    DescribeQueueAutoScalingOverviewRequest();
                    ~DescribeQueueAutoScalingOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID。
                     * @return ClusterId 集群 ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID。
                     * @param _clusterId 集群 ID。
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
                     * 获取队列名称列表。不传则返回所有队列的弹性伸缩概览信息。
                     * @return QueueNames 队列名称列表。不传则返回所有队列的弹性伸缩概览信息。
                     * 
                     */
                    std::vector<std::string> GetQueueNames() const;

                    /**
                     * 设置队列名称列表。不传则返回所有队列的弹性伸缩概览信息。
                     * @param _queueNames 队列名称列表。不传则返回所有队列的弹性伸缩概览信息。
                     * 
                     */
                    void SetQueueNames(const std::vector<std::string>& _queueNames);

                    /**
                     * 判断参数 QueueNames 是否已赋值
                     * @return QueueNames 是否已赋值
                     * 
                     */
                    bool QueueNamesHasBeenSet() const;

                private:

                    /**
                     * 集群 ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 队列名称列表。不传则返回所有队列的弹性伸缩概览信息。
                     */
                    std::vector<std::string> m_queueNames;
                    bool m_queueNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEQUEUEAUTOSCALINGOVERVIEWREQUEST_H_
