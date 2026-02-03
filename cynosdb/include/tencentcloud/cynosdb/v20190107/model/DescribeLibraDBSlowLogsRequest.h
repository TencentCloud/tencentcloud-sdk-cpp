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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBSLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LogFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBSlowLogs请求参数结构体
                */
                class DescribeLibraDBSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeLibraDBSlowLogsRequest();
                    ~DescribeLibraDBSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取只读分析引擎实例 ID
                     * @return InstanceId 只读分析引擎实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只读分析引擎实例 ID
                     * @param _instanceId 只读分析引擎实例 ID
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
                     * 获取开始时间,1753171200。
                     * @return StartTime 开始时间,1753171200。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间,1753171200。
                     * @param _startTime 开始时间,1753171200。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间,1753171200。
                     * @return EndTime 结束时间,1753171200。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间,1753171200。
                     * @param _endTime 结束时间,1753171200。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取日志单页条数限制:0-200。
                     * @return Limit 日志单页条数限制:0-200。
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置日志单页条数限制:0-200。
                     * @param _limit 日志单页条数限制:0-200。
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取日志分页，大于0。
                     * @return Offset 日志分页，大于0。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置日志分页，大于0。
                     * @param _offset 日志分页，大于0。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取日志排序方式，DESC-降序，ASC-升序。
                     * @return Order 日志排序方式，DESC-降序，ASC-升序。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置日志排序方式，DESC-降序，ASC-升序。
                     * @param _order 日志排序方式，DESC-降序，ASC-升序。
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
                     * 获取日志排序条件。
                     * @return OrderBy 日志排序条件。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置日志排序条件。
                     * @param _orderBy 日志排序条件。
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
                     * 获取过滤条件。
                     * @return LogFilter 过滤条件。
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置过滤条件。
                     * @param _logFilter 过滤条件。
                     * 
                     */
                    void SetLogFilter(const std::vector<LogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                private:

                    /**
                     * 只读分析引擎实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间,1753171200。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间,1753171200。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志单页条数限制:0-200。
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 日志分页，大于0。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 日志排序方式，DESC-降序，ASC-升序。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 日志排序条件。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 过滤条件。
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBSLOWLOGSREQUEST_H_
