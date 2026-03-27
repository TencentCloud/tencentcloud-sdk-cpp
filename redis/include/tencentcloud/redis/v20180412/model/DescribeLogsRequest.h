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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/LogFilter.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     * @return StartTime <p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     * @param _startTime <p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
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
                     * 获取<p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     * @return EndTime <p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     * @param _endTime <p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
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
                     * 获取<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @return LogType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @param _logType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
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
                     * 获取<p>过滤条件</p>
                     * @return LogFilter <p>过滤条件</p>
                     * 
                     */
                    std::vector<LogFilter> GetLogFilter() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _logFilter <p>过滤条件</p>
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
                     * 获取<p>每页返回的日志列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * @return Limit <p>每页返回的日志列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回的日志列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     * @param _limit <p>每页返回的日志列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
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
                     * 获取<p>分页的起始偏移量。</p><ul><li>默认：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * @return Offset <p>分页的起始偏移量。</p><ul><li>默认：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页的起始偏移量。</p><ul><li>默认：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     * @param _offset <p>分页的起始偏移量。</p><ul><li>默认：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
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
                     * 获取<p>日志排序方式，默认值为 DESC。取值如下：</p><ul><li>ASC：按时间升序排列，最早的日志在前。</li><li>DESC：按时间降序排列，最新的日志在前。</li></ul>
                     * @return Order <p>日志排序方式，默认值为 DESC。取值如下：</p><ul><li>ASC：按时间升序排列，最早的日志在前。</li><li>DESC：按时间降序排列，最新的日志在前。</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>日志排序方式，默认值为 DESC。取值如下：</p><ul><li>ASC：按时间升序排列，最早的日志在前。</li><li>DESC：按时间降序排列，最新的日志在前。</li></ul>
                     * @param _order <p>日志排序方式，默认值为 DESC。取值如下：</p><ul><li>ASC：按时间升序排列，最早的日志在前。</li><li>DESC：按时间降序排列，最新的日志在前。</li></ul>
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
                     * 获取<p>排序字段，指定按哪个字段对日志进行排序。</p>
                     * @return OrderBy <p>排序字段，指定按哪个字段对日志进行排序。</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段，指定按哪个字段对日志进行排序。</p>
                     * @param _orderBy <p>排序字段，指定按哪个字段对日志进行排序。</p>
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
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志检索的起始时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 00:00:00。返回结果中仅包含该时间点及之后的日志。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>日志检索的结束时间。</p><p>参数格式：YYYY-MM-DD HH:mm:ss，例如 2026-03-06 23:59:59。返回结果中仅包含该时间点及之前的日志。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<LogFilter> m_logFilter;
                    bool m_logFilterHasBeenSet;

                    /**
                     * <p>每页返回的日志列表大小。</p><ul><li>默认值：20。</li><li>取值范围：[1,100]。</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页的起始偏移量。</p><ul><li>默认：0。</li><li>取值：Limit 整数倍。计算公式：offset=limit*(页码-1)。</li></ul>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>日志排序方式，默认值为 DESC。取值如下：</p><ul><li>ASC：按时间升序排列，最早的日志在前。</li><li>DESC：按时间降序排列，最新的日志在前。</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段，指定按哪个字段对日志进行排序。</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGSREQUEST_H_
