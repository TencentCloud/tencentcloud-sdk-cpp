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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_

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
                * DescribeScheduledActions请求参数结构体
                */
                class DescribeScheduledActionsRequest : public AbstractModel
                {
                public:
                    DescribeScheduledActionsRequest();
                    ~DescribeScheduledActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID。</p>
                     * @return ClusterId <p>集群 ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。</p>
                     * @param _clusterId <p>集群 ID。</p>
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
                     * 获取<p>队列名称。</p>
                     * @return QueueName <p>队列名称。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称。</p>
                     * @param _queueName <p>队列名称。</p>
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
                     * 获取<p>定时伸缩任务 ID 列表。</p>
                     * @return ScheduledActionIds <p>定时伸缩任务 ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetScheduledActionIds() const;

                    /**
                     * 设置<p>定时伸缩任务 ID 列表。</p>
                     * @param _scheduledActionIds <p>定时伸缩任务 ID 列表。</p>
                     * 
                     */
                    void SetScheduledActionIds(const std::vector<std::string>& _scheduledActionIds);

                    /**
                     * 判断参数 ScheduledActionIds 是否已赋值
                     * @return ScheduledActionIds 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdsHasBeenSet() const;

                    /**
                     * 获取<p>任务状态过滤条件。</p>
                     * @return Status <p>任务状态过滤条件。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态过滤条件。</p>
                     * @param _status <p>任务状态过滤条件。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>队列名称。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>定时伸缩任务 ID 列表。</p>
                     */
                    std::vector<std::string> m_scheduledActionIds;
                    bool m_scheduledActionIdsHasBeenSet;

                    /**
                     * <p>任务状态过滤条件。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_
