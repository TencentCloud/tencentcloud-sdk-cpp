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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_

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
                * DescribeSlowQueryList请求参数结构体
                */
                class DescribeSlowQueryListRequest : public AbstractModel
                {
                public:
                    DescribeSlowQueryListRequest();
                    ~DescribeSlowQueryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return DBInstanceId 实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _dBInstanceId 实例ID。
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
                     * 获取查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     * @return StartTime 查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     * @param _startTime 查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。
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
                     * 获取查询结束时间，形如2018-01-01 00:00:00。	
                     * @return EndTime 查询结束时间，形如2018-01-01 00:00:00。	
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，形如2018-01-01 00:00:00。	
                     * @param _endTime 查询结束时间，形如2018-01-01 00:00:00。	
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
                     * 获取数据库名字。	
                     * @return DatabaseName 数据库名字。	
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名字。	
                     * @param _databaseName 数据库名字。	
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
                     * 获取排序方式，包括升序：asc 降序：desc。默认值为desc。	
                     * @return OrderByType 排序方式，包括升序：asc 降序：desc。默认值为desc。	
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，包括升序：asc 降序：desc。默认值为desc。	
                     * @param _orderByType 排序方式，包括升序：asc 降序：desc。默认值为desc。	
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
                     * 获取排序字段，取值范围[SessionStartTime,Duration]。默认值为SessionStartTime。
                     * @return OrderBy 排序字段，取值范围[SessionStartTime,Duration]。默认值为SessionStartTime。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，取值范围[SessionStartTime,Duration]。默认值为SessionStartTime。
                     * @param _orderBy 排序字段，取值范围[SessionStartTime,Duration]。默认值为SessionStartTime。
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
                     * 获取每页显示数量，取值范围为1-100。默认值为50。	
                     * @return Limit 每页显示数量，取值范围为1-100。默认值为50。	
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页显示数量，取值范围为1-100。默认值为50。	
                     * @param _limit 每页显示数量，取值范围为1-100。默认值为50。	
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
                     * 获取数据偏移量，从0开始。默认值为0。	
                     * @return Offset 数据偏移量，从0开始。默认值为0。	
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始。默认值为0。	
                     * @param _offset 数据偏移量，从0开始。默认值为0。	
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询起始时间，形如2018-01-01 00:00:00。日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，形如2018-01-01 00:00:00。	
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据库名字。	
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 排序方式，包括升序：asc 降序：desc。默认值为desc。	
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 排序字段，取值范围[SessionStartTime,Duration]。默认值为SessionStartTime。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 每页显示数量，取值范围为1-100。默认值为50。	
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，从0开始。默认值为0。	
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_
