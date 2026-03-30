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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBELOGSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/LogFilter.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeLogs请求参数结构体
                */
                class DescribeLogsRequest : public AbstractModel
                {
                public:
                    DescribeLogsRequest();
                    ~DescribeLogsRequest() = default;
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
                     * 获取<p>要检索日志的起始时间</p>
                     * @return StartTime <p>要检索日志的起始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>要检索日志的起始时间</p>
                     * @param _startTime <p>要检索日志的起始时间</p>
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
                     * 获取<p>要检索日志的结束时间</p>
                     * @return EndTime <p>要检索日志的结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>要检索日志的结束时间</p>
                     * @param _endTime <p>要检索日志的结束时间</p>
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
                     * 获取<p>日志类型</p>
                     * @return LogType <p>日志类型</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型</p>
                     * @param _logType <p>日志类型</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件[type, Compare, Value]</p>
                     * @return LogFilter <p>过滤条件[type, Compare, Value]</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置<p>过滤条件[type, Compare, Value]</p>
                     * @param _logFilter <p>过滤条件[type, Compare, Value]</p>
                     * 
                     */
                    void SetLogFilter(const std::vector<LogFilter>& _logFilter);

                    /**
                     * 判断参数 LogFilter 是否已赋值
                     * @return LogFilter 是否已赋值
                     * 
                     */
                    bool LogFilterHasBeenSet() const;

                    /**
                     * 获取<p>单页条数限制，取值1-100，默认100</p>
                     * @return Limit <p>单页条数限制，取值1-100，默认100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页条数限制，取值1-100，默认100</p>
                     * @param _limit <p>单页条数限制，取值1-100，默认100</p>
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
                     * 获取<p>偏移量，大于0</p>
                     * @return Offset <p>偏移量，大于0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，大于0</p>
                     * @param _offset <p>偏移量，大于0</p>
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
                     * 获取<p>排序，可选：ASC，DESC</p>
                     * @return Order <p>排序，可选：ASC，DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序，可选：ASC，DESC</p>
                     * @param _order <p>排序，可选：ASC，DESC</p>
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
                     * 获取<p>排序条件，根据业务字段不同，可选排序字段不一样</p>
                     * @return OrderBy <p>排序条件，根据业务字段不同，可选排序字段不一样</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序条件，根据业务字段不同，可选排序字段不一样</p>
                     * @param _orderBy <p>排序条件，根据业务字段不同，可选排序字段不一样</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>要检索日志的起始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>要检索日志的结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>日志类型</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>过滤条件[type, Compare, Value]</p>
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * <p>单页条数限制，取值1-100，默认100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，大于0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序，可选：ASC，DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序条件，根据业务字段不同，可选排序字段不一样</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBELOGSREQUEST_H_
