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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDBSlowLogs请求参数结构体
                */
                class DescribeDBSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeDBSlowLogsRequest();
                    ~DescribeDBSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：dcdbt-hw0qj6m1
                     * @return InstanceId 实例 ID，形如：dcdbt-hw0qj6m1
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：dcdbt-hw0qj6m1
                     * @param _instanceId 实例 ID，形如：dcdbt-hw0qj6m1
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
                     * 获取从结果的第几条数据开始返回
                     * @return Offset 从结果的第几条数据开始返回
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置从结果的第几条数据开始返回
                     * @param _offset 从结果的第几条数据开始返回
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
                     * 获取返回的结果条数
                     * @return Limit 返回的结果条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回的结果条数
                     * @param _limit 返回的结果条数
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
                     * 获取查询的起始时间，形如2016-07-23 14:55:20
                     * @return StartTime 查询的起始时间，形如2016-07-23 14:55:20
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询的起始时间，形如2016-07-23 14:55:20
                     * @param _startTime 查询的起始时间，形如2016-07-23 14:55:20
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
                     * 获取实例的分片ID，形如shard-53ima8ln
                     * @return ShardId 实例的分片ID，形如shard-53ima8ln
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置实例的分片ID，形如shard-53ima8ln
                     * @param _shardId 实例的分片ID，形如shard-53ima8ln
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
                     * 获取查询的结束时间，形如2016-08-22 14:55:20。如果不填，那么查询结束时间就是当前时间
                     * @return EndTime 查询的结束时间，形如2016-08-22 14:55:20。如果不填，那么查询结束时间就是当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询的结束时间，形如2016-08-22 14:55:20。如果不填，那么查询结束时间就是当前时间
                     * @param _endTime 查询的结束时间，形如2016-08-22 14:55:20。如果不填，那么查询结束时间就是当前时间
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
                     * 获取要查询的具体数据库名称
                     * @return Db 要查询的具体数据库名称
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置要查询的具体数据库名称
                     * @param _db 要查询的具体数据库名称
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取排序指标，取值为query_time_sum或者query_count。不填默认按照query_time_sum排序
                     * @return OrderBy 排序指标，取值为query_time_sum或者query_count。不填默认按照query_time_sum排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序指标，取值为query_time_sum或者query_count。不填默认按照query_time_sum排序
                     * @param _orderBy 排序指标，取值为query_time_sum或者query_count。不填默认按照query_time_sum排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型，desc（降序）或者asc（升序）。不填默认desc排序
                     * @return OrderByType 排序类型，desc（降序）或者asc（升序）。不填默认desc排序
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型，desc（降序）或者asc（升序）。不填默认desc排序
                     * @param _orderByType 排序类型，desc（降序）或者asc（升序）。不填默认desc排序
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取是否查询从机的慢查询，0-主机; 1-从机。不填默认查询主机慢查询
                     * @return Slave 是否查询从机的慢查询，0-主机; 1-从机。不填默认查询主机慢查询
                     * 
                     */
                    int64_t GetSlave() const;

                    /**
                     * 设置是否查询从机的慢查询，0-主机; 1-从机。不填默认查询主机慢查询
                     * @param _slave 是否查询从机的慢查询，0-主机; 1-从机。不填默认查询主机慢查询
                     * 
                     */
                    void SetSlave(const int64_t& _slave);

                    /**
                     * 判断参数 Slave 是否已赋值
                     * @return Slave 是否已赋值
                     * 
                     */
                    bool SlaveHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：dcdbt-hw0qj6m1
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 从结果的第几条数据开始返回
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回的结果条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的起始时间，形如2016-07-23 14:55:20
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 实例的分片ID，形如shard-53ima8ln
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 查询的结束时间，形如2016-08-22 14:55:20。如果不填，那么查询结束时间就是当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 要查询的具体数据库名称
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 排序指标，取值为query_time_sum或者query_count。不填默认按照query_time_sum排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型，desc（降序）或者asc（升序）。不填默认desc排序
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 是否查询从机的慢查询，0-主机; 1-从机。不填默认查询主机慢查询
                     */
                    int64_t m_slave;
                    bool m_slaveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
