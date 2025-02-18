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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_

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
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。
                     * @return TaskId 按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。
                     * @param _taskId 按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取按照数据库实例ID进行查询。
                     * @return DBInstanceId 按照数据库实例ID进行查询。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置按照数据库实例ID进行查询。
                     * @param _dBInstanceId 按照数据库实例ID进行查询。
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
                     * 获取任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。
                     * @return MinStartTime 任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。
                     * 
                     */
                    std::string GetMinStartTime() const;

                    /**
                     * 设置任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。
                     * @param _minStartTime 任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。
                     * 
                     */
                    void SetMinStartTime(const std::string& _minStartTime);

                    /**
                     * 判断参数 MinStartTime 是否已赋值
                     * @return MinStartTime 是否已赋值
                     * 
                     */
                    bool MinStartTimeHasBeenSet() const;

                    /**
                     * 获取任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。
                     * @return MaxStartTime 任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。
                     * 
                     */
                    std::string GetMaxStartTime() const;

                    /**
                     * 设置任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。
                     * @param _maxStartTime 任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。
                     * 
                     */
                    void SetMaxStartTime(const std::string& _maxStartTime);

                    /**
                     * 判断参数 MaxStartTime 是否已赋值
                     * @return MaxStartTime 是否已赋值
                     * 
                     */
                    bool MaxStartTimeHasBeenSet() const;

                    /**
                     * 获取每页显示数量，取值范围为1-100，默认为返回20条。
                     * @return Limit 每页显示数量，取值范围为1-100，默认为返回20条。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页显示数量，取值范围为1-100，默认为返回20条。
                     * @param _limit 每页显示数量，取值范围为1-100，默认为返回20条。
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
                     * 获取数据偏移量，从0开始。
                     * @return Offset 数据偏移量，从0开始。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始。
                     * @param _offset 数据偏移量，从0开始。
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
                     * 获取排序字段，支持StartTime,EndTime，默认为StartTime。
                     * @return OrderBy 排序字段，支持StartTime,EndTime，默认为StartTime。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，支持StartTime,EndTime，默认为StartTime。
                     * @param _orderBy 排序字段，支持StartTime,EndTime，默认为StartTime。
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
                     * 获取排序方式，包括升序：asc，降序：desc，默认为desc。
                     * @return OrderByType 排序方式，包括升序：asc，降序：desc，默认为desc。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，包括升序：asc，降序：desc，默认为desc。
                     * @param _orderByType 排序方式，包括升序：asc，降序：desc，默认为desc。
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
                     * 按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 按照数据库实例ID进行查询。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。
                     */
                    std::string m_minStartTime;
                    bool m_minStartTimeHasBeenSet;

                    /**
                     * 任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。
                     */
                    std::string m_maxStartTime;
                    bool m_maxStartTimeHasBeenSet;

                    /**
                     * 每页显示数量，取值范围为1-100，默认为返回20条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，从0开始。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，支持StartTime,EndTime，默认为StartTime。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，包括升序：asc，降序：desc，默认为desc。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_
