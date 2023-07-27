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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCESLOWQUERIESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCESLOWQUERIESREQUEST_H_

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
                * ExportInstanceSlowQueries请求参数结构体
                */
                class ExportInstanceSlowQueriesRequest : public AbstractModel
                {
                public:
                    ExportInstanceSlowQueriesRequest();
                    ~ExportInstanceSlowQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取事务开始最早时间
                     * @return StartTime 事务开始最早时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置事务开始最早时间
                     * @param _startTime 事务开始最早时间
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
                     * 获取事务开始最晚时间
                     * @return EndTime 事务开始最晚时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置事务开始最晚时间
                     * @param _endTime 事务开始最晚时间
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
                     * 获取限制条数
                     * @return Limit 限制条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制条数
                     * @param _limit 限制条数
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
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
                     * 获取客户端host
                     * @return Host 客户端host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置客户端host
                     * @param _host 客户端host
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
                     * 获取数据库名
                     * @return Database 数据库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名
                     * @param _database 数据库名
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
                     * 获取文件类型，可选值：csv, original
                     * @return FileType 文件类型，可选值：csv, original
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，可选值：csv, original
                     * @param _fileType 文件类型，可选值：csv, original
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取排序字段，可选值： QueryTime,LockTime,RowsExamined,RowsSent
                     * @return OrderBy 排序字段，可选值： QueryTime,LockTime,RowsExamined,RowsSent
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选值： QueryTime,LockTime,RowsExamined,RowsSent
                     * @param _orderBy 排序字段，可选值： QueryTime,LockTime,RowsExamined,RowsSent
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
                     * 获取排序类型，可选值：asc,desc
                     * @return OrderByType 排序类型，可选值：asc,desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型，可选值：asc,desc
                     * @param _orderByType 排序类型，可选值：asc,desc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事务开始最早时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 事务开始最晚时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 限制条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 客户端host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 文件类型，可选值：csv, original
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 排序字段，可选值： QueryTime,LockTime,RowsExamined,RowsSent
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型，可选值：asc,desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCESLOWQUERIESREQUEST_H_
