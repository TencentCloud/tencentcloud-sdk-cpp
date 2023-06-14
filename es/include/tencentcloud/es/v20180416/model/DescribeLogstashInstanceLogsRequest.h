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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCELOGSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeLogstashInstanceLogs请求参数结构体
                */
                class DescribeLogstashInstanceLogsRequest : public AbstractModel
                {
                public:
                    DescribeLogstashInstanceLogsRequest();
                    ~DescribeLogstashInstanceLogsRequest() = default;
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
                     * 获取日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 慢日志</li>
<li>3, GC日志</li>
                     * @return LogType 日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 慢日志</li>
<li>3, GC日志</li>
                     * 
                     */
                    uint64_t GetLogType() const;

                    /**
                     * 设置日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 慢日志</li>
<li>3, GC日志</li>
                     * @param _logType 日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 慢日志</li>
<li>3, GC日志</li>
                     * 
                     */
                    void SetLogType(const uint64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * @return SearchKey 搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * @param _searchKey 搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @return StartTime 日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @param _startTime 日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
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
                     * 获取日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @return EndTime 日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     * @param _endTime 日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
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
                     * 获取分页起始值, 默认值为0
                     * @return Offset 分页起始值, 默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始值, 默认值为0
                     * @param _offset 分页起始值, 默认值为0
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
                     * 获取分页大小，默认值为100，最大值100
                     * @return Limit 分页大小，默认值为100，最大值100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认值为100，最大值100
                     * @param _limit 分页大小，默认值为100，最大值100
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
                     * 获取时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * @return OrderByType 时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * 
                     */
                    uint64_t GetOrderByType() const;

                    /**
                     * 设置时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * @param _orderByType 时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     * 
                     */
                    void SetOrderByType(const uint64_t& _orderByType);

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
                     * 日志类型，默认值为1
<li>1, 主日志</li>
<li>2, 慢日志</li>
<li>3, GC日志</li>
                     */
                    uint64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 搜索词，支持LUCENE语法，如 level:WARN、ip:1.1.1.1、message:test-index等
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 日志开始时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志结束时间，格式为YYYY-MM-DD HH:MM:SS, 如2019-01-22 20:15:53
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页起始值, 默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认值为100，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 时间排序方式，默认值为0
<li>0, 降序</li>
<li>1, 升序</li>
                     */
                    uint64_t m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCELOGSREQUEST_H_
