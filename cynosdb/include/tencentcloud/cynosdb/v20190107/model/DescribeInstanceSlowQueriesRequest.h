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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESLOWQUERIESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESLOWQUERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceSlowQueries请求参数结构体
                */
                class DescribeInstanceSlowQueriesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSlowQueriesRequest();
                    ~DescribeInstanceSlowQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>事务开始最早时间</p>
                     * @return StartTime <p>事务开始最早时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>事务开始最早时间</p>
                     * @param _startTime <p>事务开始最早时间</p>
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
                     * 获取<p>事务开始最晚时间</p>
                     * @return EndTime <p>事务开始最晚时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>事务开始最晚时间</p>
                     * @param _endTime <p>事务开始最晚时间</p>
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
                     * 获取<p>限制条数</p><p>建议控制 limit 大小，当 limit 过大时，由于平台返回结果大小限制，可能会造成截断</p>
                     * @return Limit <p>限制条数</p><p>建议控制 limit 大小，当 limit 过大时，由于平台返回结果大小限制，可能会造成截断</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数</p><p>建议控制 limit 大小，当 limit 过大时，由于平台返回结果大小限制，可能会造成截断</p>
                     * @param _limit <p>限制条数</p><p>建议控制 limit 大小，当 limit 过大时，由于平台返回结果大小限制，可能会造成截断</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return Username <p>用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _username <p>用户名</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>客户端host</p>
                     * @return Host <p>客户端host</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>客户端host</p>
                     * @param _host <p>客户端host</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>数据库名</p>
                     * @return Database <p>数据库名</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _database <p>数据库名</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>排序字段</p><p>枚举值：</p><ul><li>QueryTime： 按照 SQL 语句的总执行时长排序</li><li>LockTime： 按照 SQL 语句在等待锁（如表锁、行锁）上消耗的时间排序</li><li>RowsExamined： 按照 SQL 语句在执行过程中扫描的行数排序</li><li>RowsSent： 按照 SQL 语句最终返回给客户端的结果行数排序</li><li>Timestamp： 按照慢查询语句发生的时间戳排序</li></ul>
                     * @return OrderBy <p>排序字段</p><p>枚举值：</p><ul><li>QueryTime： 按照 SQL 语句的总执行时长排序</li><li>LockTime： 按照 SQL 语句在等待锁（如表锁、行锁）上消耗的时间排序</li><li>RowsExamined： 按照 SQL 语句在执行过程中扫描的行数排序</li><li>RowsSent： 按照 SQL 语句最终返回给客户端的结果行数排序</li><li>Timestamp： 按照慢查询语句发生的时间戳排序</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段</p><p>枚举值：</p><ul><li>QueryTime： 按照 SQL 语句的总执行时长排序</li><li>LockTime： 按照 SQL 语句在等待锁（如表锁、行锁）上消耗的时间排序</li><li>RowsExamined： 按照 SQL 语句在执行过程中扫描的行数排序</li><li>RowsSent： 按照 SQL 语句最终返回给客户端的结果行数排序</li><li>Timestamp： 按照慢查询语句发生的时间戳排序</li></ul>
                     * @param _orderBy <p>排序字段</p><p>枚举值：</p><ul><li>QueryTime： 按照 SQL 语句的总执行时长排序</li><li>LockTime： 按照 SQL 语句在等待锁（如表锁、行锁）上消耗的时间排序</li><li>RowsExamined： 按照 SQL 语句在执行过程中扫描的行数排序</li><li>RowsSent： 按照 SQL 语句最终返回给客户端的结果行数排序</li><li>Timestamp： 按照慢查询语句发生的时间戳排序</li></ul>
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
                     * 获取<p>排序类型，可选值：asc,desc</p>
                     * @return OrderByType <p>排序类型，可选值：asc,desc</p>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置<p>排序类型，可选值：asc,desc</p>
                     * @param _orderByType <p>排序类型，可选值：asc,desc</p>
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
                     * 获取<p>sql语句</p>
                     * @return SqlText <p>sql语句</p>
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>sql语句</p>
                     * @param _sqlText <p>sql语句</p>
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>事务开始最早时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>事务开始最晚时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>限制条数</p><p>建议控制 limit 大小，当 limit 过大时，由于平台返回结果大小限制，可能会造成截断</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>客户端host</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>排序字段</p><p>枚举值：</p><ul><li>QueryTime： 按照 SQL 语句的总执行时长排序</li><li>LockTime： 按照 SQL 语句在等待锁（如表锁、行锁）上消耗的时间排序</li><li>RowsExamined： 按照 SQL 语句在执行过程中扫描的行数排序</li><li>RowsSent： 按照 SQL 语句最终返回给客户端的结果行数排序</li><li>Timestamp： 按照慢查询语句发生的时间戳排序</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序类型，可选值：asc,desc</p>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * <p>sql语句</p>
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESLOWQUERIESREQUEST_H_
