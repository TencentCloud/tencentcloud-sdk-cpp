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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogs请求参数结构体
                */
                class DescribeInstanceLogsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLogsRequest();
                    ~DescribeInstanceLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param _instanceId 集群实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 搜索慢日志</li>
<li>3, 索引慢日志</li>
<li>4, GC日志</li>
                     * @return LogType 日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 搜索慢日志</li>
<li>3, 索引慢日志</li>
<li>4, GC日志</li>
                     * 
                     */
                    uint64_t GetLogType() const;

                    /**
                     * 设置日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 搜索慢日志</li>
<li>3, 索引慢日志</li>
<li>4, GC日志</li>
                     * @param _logType 日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 搜索慢日志</li>
<li>3, 索引慢日志</li>
<li>4, GC日志</li>
                     * 
                     */
                    void SetLogType(const uint64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * @return SearchKey 搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * @param _searchKey 搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @return StartTime 日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @param _startTime 日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @return EndTime 日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @param _endTime 日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页起始值, 默认值为0
                     * @return Offset 分页起始值, 默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始值, 默认值为0
                     * @param _offset 分页起始值, 默认值为0
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
                     * 获取分页大小，默认值为100，最大值100
                     * @return Limit 分页大小，默认值为100，最大值100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认值为100，最大值100
                     * @param _limit 分页大小，默认值为100，最大值100
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
                     * 获取时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * @return OrderByType 时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * 
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * @param _orderByType 时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * 
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取日志级别
                     * @return LogLevels 日志级别
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置日志级别
                     * @param _logLevels 日志级别
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return NodeIds 节点ID
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置节点ID
                     * @param _nodeIds 节点ID
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取慢日志索引名
                     * @return IndexName 慢日志索引名
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置慢日志索引名
                     * @param _indexName 慢日志索引名
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取慢日志索引分片
                     * @return ShardId 慢日志索引分片
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置慢日志索引分片
                     * @param _shardId 慢日志索引分片
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取慢日志查询耗时
                     * @return QueryCost 慢日志查询耗时
                     * 
                     */
                    uint64_t GetQueryCost() const;

                    /**
                     * 设置慢日志查询耗时
                     * @param _queryCost 慢日志查询耗时
                     * 
                     */
                    void SetQueryCost(const uint64_t& _queryCost);

                    /**
                     * 判断参数 QueryCost 是否已赋值
                     * @return QueryCost 是否已赋值
                     * 
                     */
                    bool QueryCostHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 搜索慢日志</li>
<li>3, 索引慢日志</li>
<li>4, GC日志</li>
                     */
                    uint64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页起始值, 默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认值为100，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 日志级别
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * 慢日志索引名
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 慢日志索引分片
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 慢日志查询耗时
                     */
                    uint64_t m_queryCost;
                    bool m_queryCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSREQUEST_H_
