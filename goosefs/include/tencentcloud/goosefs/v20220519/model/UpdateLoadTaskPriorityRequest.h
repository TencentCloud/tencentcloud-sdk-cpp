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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATELOADTASKPRIORITYREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATELOADTASKPRIORITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * UpdateLoadTaskPriority请求参数结构体
                */
                class UpdateLoadTaskPriorityRequest : public AbstractModel
                {
                public:
                    UpdateLoadTaskPriorityRequest();
                    ~UpdateLoadTaskPriorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取预热任务 ID
                     * @return TaskId 预热任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置预热任务 ID
                     * @param _taskId 预热任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * @return Priority 任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * @param _priority 任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 预热任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATELOADTASKPRIORITYREQUEST_H_
