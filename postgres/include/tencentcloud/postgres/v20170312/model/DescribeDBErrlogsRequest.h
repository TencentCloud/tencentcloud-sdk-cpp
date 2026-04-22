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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/LogFilter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBErrlogs请求参数结构体
                */
                class DescribeDBErrlogsRequest : public AbstractModel
                {
                public:
                    DescribeDBErrlogsRequest();
                    ~DescribeDBErrlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。    可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例ID。    可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID。    可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例ID。    可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。</p>
                     * @return StartTime <p>查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。</p>
                     * @param _startTime <p>查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。</p>
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
                     * 获取<p>查询结束时间，形如2018-01-01 00:00:00。</p>
                     * @return EndTime <p>查询结束时间，形如2018-01-01 00:00:00。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，形如2018-01-01 00:00:00。</p>
                     * @param _endTime <p>查询结束时间，形如2018-01-01 00:00:00。</p>
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
                     * 获取<p>数据库名字。</p>
                     * @return DatabaseName <p>数据库名字。</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名字。</p>
                     * @param _databaseName <p>数据库名字。</p>
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取<p>搜索关键字。</p>
                     * @return SearchKeys <p>搜索关键字。</p>
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置<p>搜索关键字。</p>
                     * @param _searchKeys <p>搜索关键字。</p>
                     * 
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     * 
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取<p>每页显示数量，取值范围为1-100。默认值为50。</p>
                     * @return Limit <p>每页显示数量，取值范围为1-100。默认值为50。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页显示数量，取值范围为1-100。默认值为50。</p>
                     * @param _limit <p>每页显示数量，取值范围为1-100。默认值为50。</p>
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
                     * 获取<p>数据偏移量，从0开始。默认值为0。</p>
                     * @return Offset <p>数据偏移量，从0开始。默认值为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>数据偏移量，从0开始。默认值为0。</p>
                     * @param _offset <p>数据偏移量，从0开始。默认值为0。</p>
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
                     * 获取<p>日志过滤条件。格式为  [{Type: &quot;ApplicationName&quot;, Compare: &quot;INC&quot;, Value: [&quot;123&quot;]}]。</p>
                     * @return LogFilters <p>日志过滤条件。格式为  [{Type: &quot;ApplicationName&quot;, Compare: &quot;INC&quot;, Value: [&quot;123&quot;]}]。</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilters() const;

                    /**
                     * 设置<p>日志过滤条件。格式为  [{Type: &quot;ApplicationName&quot;, Compare: &quot;INC&quot;, Value: [&quot;123&quot;]}]。</p>
                     * @param _logFilters <p>日志过滤条件。格式为  [{Type: &quot;ApplicationName&quot;, Compare: &quot;INC&quot;, Value: [&quot;123&quot;]}]。</p>
                     * 
                     */
                    void SetLogFilters(const std::vector<LogFilter>& _logFilters);

                    /**
                     * 判断参数 LogFilters 是否已赋值
                     * @return LogFilters 是否已赋值
                     * 
                     */
                    bool LogFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。    可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，形如2018-01-01 00:00:00。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>数据库名字。</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>搜索关键字。</p>
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * <p>每页显示数量，取值范围为1-100。默认值为50。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>数据偏移量，从0开始。默认值为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>日志过滤条件。格式为  [{Type: &quot;ApplicationName&quot;, Compare: &quot;INC&quot;, Value: [&quot;123&quot;]}]。</p>
                     */
                    std::vector<LogFilter> m_logFilters;
                    bool m_logFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
