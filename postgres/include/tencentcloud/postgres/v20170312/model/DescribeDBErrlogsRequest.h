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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取实例ID，形如postgres-5bq3wfjd
                     * @return DBInstanceId 实例ID，形如postgres-5bq3wfjd
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-5bq3wfjd
                     * @param DBInstanceId 实例ID，形如postgres-5bq3wfjd
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取查询起始时间，形如2018-01-01 00:00:00，起始时间不得小于7天以前
                     * @return StartTime 查询起始时间，形如2018-01-01 00:00:00，起始时间不得小于7天以前
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，形如2018-01-01 00:00:00，起始时间不得小于7天以前
                     * @param StartTime 查询起始时间，形如2018-01-01 00:00:00，起始时间不得小于7天以前
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，形如2018-01-01 00:00:00
                     * @return EndTime 查询结束时间，形如2018-01-01 00:00:00
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，形如2018-01-01 00:00:00
                     * @param EndTime 查询结束时间，形如2018-01-01 00:00:00
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取数据库名字
                     * @return DatabaseName 数据库名字
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名字
                     * @param DatabaseName 数据库名字
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return SearchKeys 搜索关键字
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置搜索关键字
                     * @param SearchKeys 搜索关键字
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的最大数量。取值为1-100
                     * @return Limit 分页返回，每页返回的最大数量。取值为1-100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的最大数量。取值为1-100
                     * @param Limit 分页返回，每页返回的最大数量。取值为1-100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回，返回第几页的数据，从第0页开始计数
                     * @return Offset 分页返回，返回第几页的数据，从第0页开始计数
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，返回第几页的数据，从第0页开始计数
                     * @param Offset 分页返回，返回第几页的数据，从第0页开始计数
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-5bq3wfjd
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询起始时间，形如2018-01-01 00:00:00，起始时间不得小于7天以前
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，形如2018-01-01 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据库名字
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * 分页返回，每页返回的最大数量。取值为1-100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回，返回第几页的数据，从第0页开始计数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBERRLOGSREQUEST_H_
