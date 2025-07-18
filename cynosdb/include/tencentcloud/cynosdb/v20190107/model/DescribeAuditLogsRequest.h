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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditLogFilter.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceAuditLogFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeAuditLogs请求参数结构体
                */
                class DescribeAuditLogsRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogsRequest();
                    ~DescribeAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取开始时间，格式为："2017-07-12 10:29:20"。
                     * @return StartTime 开始时间，格式为："2017-07-12 10:29:20"。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式为："2017-07-12 10:29:20"。
                     * @param _startTime 开始时间，格式为："2017-07-12 10:29:20"。
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
                     * 获取结束时间，格式为："2017-07-12 10:29:20"。
                     * @return EndTime 结束时间，格式为："2017-07-12 10:29:20"。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式为："2017-07-12 10:29:20"。
                     * @param _endTime 结束时间，格式为："2017-07-12 10:29:20"。
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
                     * 获取排序方式。支持值包括："ASC" - 升序，"DESC" - 降序。
                     * @return Order 排序方式。支持值包括："ASC" - 升序，"DESC" - 降序。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式。支持值包括："ASC" - 升序，"DESC" - 降序。
                     * @param _order 排序方式。支持值包括："ASC" - 升序，"DESC" - 降序。
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段。支持值包括：
"timestamp" - 时间戳；
"affectRows" - 影响行数；
"execTime" - 执行时间。
                     * @return OrderBy 排序字段。支持值包括：
"timestamp" - 时间戳；
"affectRows" - 影响行数；
"execTime" - 执行时间。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段。支持值包括：
"timestamp" - 时间戳；
"affectRows" - 影响行数；
"execTime" - 执行时间。
                     * @param _orderBy 排序字段。支持值包括：
"timestamp" - 时间戳；
"affectRows" - 影响行数；
"execTime" - 执行时间。
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
                     * 获取已废弃。
                     * @return Filter 已废弃。
                     * @deprecated
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置已废弃。
                     * @param _filter 已废弃。
                     * @deprecated
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * @deprecated
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取分页参数，单次返回的数据条数。默认值为100，最大值为100。
                     * @return Limit 分页参数，单次返回的数据条数。默认值为100，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，单次返回的数据条数。默认值为100，最大值为100。
                     * @param _limit 分页参数，单次返回的数据条数。默认值为100，最大值为100。
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
                     * 获取分页偏移量。
说明：Limit 和 Offset 的取值之和需小于等于65536。
                     * @return Offset 分页偏移量。
说明：Limit 和 Offset 的取值之和需小于等于65536。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
说明：Limit 和 Offset 的取值之和需小于等于65536。
                     * @param _offset 分页偏移量。
说明：Limit 和 Offset 的取值之和需小于等于65536。
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
                     * 获取过滤条件。多个值之前是且的关系。
                     * @return LogFilter 过滤条件。多个值之前是且的关系。
                     * 
                     */
                    std::vector<InstanceAuditLogFilter> GetLogFilter() const;

                    /**
                     * 设置过滤条件。多个值之前是且的关系。
                     * @param _logFilter 过滤条件。多个值之前是且的关系。
                     * 
                     */
                    void SetLogFilter(const std::vector<InstanceAuditLogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，格式为："2017-07-12 10:29:20"。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式为："2017-07-12 10:29:20"。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序方式。支持值包括："ASC" - 升序，"DESC" - 降序。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段。支持值包括：
"timestamp" - 时间戳；
"affectRows" - 影响行数；
"execTime" - 执行时间。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 已废弃。
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 分页参数，单次返回的数据条数。默认值为100，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。
说明：Limit 和 Offset 的取值之和需小于等于65536。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。多个值之前是且的关系。
                     */
                    std::vector<InstanceAuditLogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITLOGSREQUEST_H_
