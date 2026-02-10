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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LISTLOADTASKSREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LISTLOADTASKSREQUEST_H_

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
                * ListLoadTasks请求参数结构体
                */
                class ListLoadTasksRequest : public AbstractModel
                {
                public:
                    ListLoadTasksRequest();
                    ~ListLoadTasksRequest() = default;
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Limit 偏移量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置偏移量
                     * @param _limit 偏移量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取任务创建起始时间戳，默认为3天前：当前时间戳-86400*3
                     * @return StartTimestamp 任务创建起始时间戳，默认为3天前：当前时间戳-86400*3
                     * 
                     */
                    uint64_t GetStartTimestamp() const;

                    /**
                     * 设置任务创建起始时间戳，默认为3天前：当前时间戳-86400*3
                     * @param _startTimestamp 任务创建起始时间戳，默认为3天前：当前时间戳-86400*3
                     * 
                     */
                    void SetStartTimestamp(const uint64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取任务变更时间戳
                     * @return EndTimestamp 任务变更时间戳
                     * 
                     */
                    uint64_t GetEndTimestamp() const;

                    /**
                     * 设置任务变更时间戳
                     * @param _endTimestamp 任务变更时间戳
                     * 
                     */
                    void SetEndTimestamp(const uint64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取筛选任务状态，枚举Waiting,Running,Canceled,Completed。默认返回所有任务
                     * @return State 筛选任务状态，枚举Waiting,Running,Canceled,Completed。默认返回所有任务
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置筛选任务状态，枚举Waiting,Running,Canceled,Completed。默认返回所有任务
                     * @param _state 筛选任务状态，枚举Waiting,Running,Canceled,Completed。默认返回所有任务
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取筛选优先级任务，默认返回所有任务
                     * @return Priority 筛选优先级任务，默认返回所有任务
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置筛选优先级任务，默认返回所有任务
                     * @param _priority 筛选优先级任务，默认返回所有任务
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
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务创建起始时间戳，默认为3天前：当前时间戳-86400*3
                     */
                    uint64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 任务变更时间戳
                     */
                    uint64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * 筛选任务状态，枚举Waiting,Running,Canceled,Completed。默认返回所有任务
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 筛选优先级任务，默认返回所有任务
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LISTLOADTASKSREQUEST_H_
