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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBETASKRECORDSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBETASKRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeTaskRecords请求参数结构体
                */
                class DescribeTaskRecordsRequest : public AbstractModel
                {
                public:
                    DescribeTaskRecordsRequest();
                    ~DescribeTaskRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取翻页偏移量。默认值为0
                     * @return Offset 翻页偏移量。默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量。默认值为0
                     * @param _offset 翻页偏移量。默认值为0
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
                     * 获取翻页查询单页数量。默认值为 20，最大值为 1000
                     * @return Limit 翻页查询单页数量。默认值为 20，最大值为 1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页查询单页数量。默认值为 20，最大值为 1000
                     * @param _limit 翻页查询单页数量。默认值为 20，最大值为 1000
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
                     * 获取模糊查询关键字，支持任务ID和任务名称。
                     * @return SearchWord 模糊查询关键字，支持任务ID和任务名称。
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置模糊查询关键字，支持任务ID和任务名称。
                     * @param _searchWord 模糊查询关键字，支持任务ID和任务名称。
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取任务启用状态。一共2种状态可选，ENABLED：启用，DISABLED：停用
                     * @return TaskState 任务启用状态。一共2种状态可选，ENABLED：启用，DISABLED：停用
                     * 
                     */
                    std::string GetTaskState() const;

                    /**
                     * 设置任务启用状态。一共2种状态可选，ENABLED：启用，DISABLED：停用
                     * @param _taskState 任务启用状态。一共2种状态可选，ENABLED：启用，DISABLED：停用
                     * 
                     */
                    void SetTaskState(const std::string& _taskState);

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                    /**
                     * 获取部署组ID。前往应用管理 - 应用部署，部署组列表页面获取部署组ID。
                     * @return GroupId 部署组ID。前往应用管理 - 应用部署，部署组列表页面获取部署组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID。前往应用管理 - 应用部署，部署组列表页面获取部署组ID。
                     * @param _groupId 部署组ID。前往应用管理 - 应用部署，部署组列表页面获取部署组ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * @return TaskType 任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * @param _taskType 任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务执行方式，unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * @return ExecuteType 任务执行方式，unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * 
                     */
                    std::string GetExecuteType() const;

                    /**
                     * 设置任务执行方式，unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * @param _executeType 任务执行方式，unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * 
                     */
                    void SetExecuteType(const std::string& _executeType);

                    /**
                     * 判断参数 ExecuteType 是否已赋值
                     * @return ExecuteType 是否已赋值
                     * 
                     */
                    bool ExecuteTypeHasBeenSet() const;

                    /**
                     * 获取任务ID列表。
                     * @return Ids 任务ID列表。
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置任务ID列表。
                     * @param _ids 任务ID列表。
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 翻页偏移量。默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页查询单页数量。默认值为 20，最大值为 1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模糊查询关键字，支持任务ID和任务名称。
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 任务启用状态。一共2种状态可选，ENABLED：启用，DISABLED：停用
                     */
                    std::string m_taskState;
                    bool m_taskStateHasBeenSet;

                    /**
                     * 部署组ID。前往应用管理 - 应用部署，部署组列表页面获取部署组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务执行方式，unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     */
                    std::string m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * 任务ID列表。
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBETASKRECORDSREQUEST_H_
