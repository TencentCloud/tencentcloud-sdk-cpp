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
                     * 获取<p>按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。</p>
                     * @return TaskId <p>按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。</p>
                     * @param _taskId <p>按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。</p>
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
                     * 获取<p>按照数据库实例ID进行查询。</p>
                     * @return DBInstanceId <p>按照数据库实例ID进行查询。</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>按照数据库实例ID进行查询。</p>
                     * @param _dBInstanceId <p>按照数据库实例ID进行查询。</p>
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
                     * 获取<p>任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。</p>
                     * @return MinStartTime <p>任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。</p>
                     * 
                     */
                    std::string GetMinStartTime() const;

                    /**
                     * 设置<p>任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。</p>
                     * @param _minStartTime <p>任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。</p>
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
                     * 获取<p>任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。</p>
                     * @return MaxStartTime <p>任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。</p>
                     * 
                     */
                    std::string GetMaxStartTime() const;

                    /**
                     * 设置<p>任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。</p>
                     * @param _maxStartTime <p>任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。</p>
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
                     * 获取<p>每页显示数量，取值范围为1-100，默认为返回20条。</p>
                     * @return Limit <p>每页显示数量，取值范围为1-100，默认为返回20条。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页显示数量，取值范围为1-100，默认为返回20条。</p>
                     * @param _limit <p>每页显示数量，取值范围为1-100，默认为返回20条。</p>
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
                     * 获取<p>数据偏移量，从0开始。</p>
                     * @return Offset <p>数据偏移量，从0开始。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>数据偏移量，从0开始。</p>
                     * @param _offset <p>数据偏移量，从0开始。</p>
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
                     * 获取<p>排序字段，支持StartTime,EndTime，默认为StartTime。</p>
                     * @return OrderBy <p>排序字段，支持StartTime,EndTime，默认为StartTime。</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段，支持StartTime,EndTime，默认为StartTime。</p>
                     * @param _orderBy <p>排序字段，支持StartTime,EndTime，默认为StartTime。</p>
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
                     * 获取<p>排序方式，包括升序：asc，降序：desc，默认为desc。</p>
                     * @return OrderByType <p>排序方式，包括升序：asc，降序：desc，默认为desc。</p>
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置<p>排序方式，包括升序：asc，降序：desc，默认为desc。</p>
                     * @param _orderByType <p>排序方式，包括升序：asc，降序：desc，默认为desc。</p>
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
                     * <p>按照任务ID进行查询。其余云API中返回的FlowId和TaskId等价。</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>按照数据库实例ID进行查询。</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>任务的最早开始时间，形如2024-08-23 00:00:00,默认只展示180天内的数据。</p>
                     */
                    std::string m_minStartTime;
                    bool m_minStartTimeHasBeenSet;

                    /**
                     * <p>任务的最晚开始时间，形如2024-08-23 00:00:00，默认为当前时间。</p>
                     */
                    std::string m_maxStartTime;
                    bool m_maxStartTimeHasBeenSet;

                    /**
                     * <p>每页显示数量，取值范围为1-100，默认为返回20条。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>数据偏移量，从0开始。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序字段，支持StartTime,EndTime，默认为StartTime。</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方式，包括升序：asc，降序：desc，默认为desc。</p>
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBETASKSREQUEST_H_
