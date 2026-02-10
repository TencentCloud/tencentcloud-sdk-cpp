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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_H_

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
                * DescribeAutoScalingConfiguration请求参数结构体
                */
                class DescribeAutoScalingConfigurationRequest : public AbstractModel
                {
                public:
                    DescribeAutoScalingConfigurationRequest();
                    ~DescribeAutoScalingConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID。</p>
                     * @return ClusterId <p>集群ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID。</p>
                     * @param _clusterId <p>集群ID。</p>
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
                     * 获取<p>队列名称</p>
                     * @return QueueName <p>队列名称</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称</p>
                     * @param _queueName <p>队列名称</p>
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
                     * <p>集群ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>队列名称</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_H_
