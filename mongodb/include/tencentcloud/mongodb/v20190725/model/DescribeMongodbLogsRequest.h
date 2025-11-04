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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeMongodbLogs请求参数结构体
                */
                class DescribeMongodbLogsRequest : public AbstractModel
                {
                public:
                    DescribeMongodbLogsRequest();
                    ~DescribeMongodbLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb#/)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb#/)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb#/)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb#/)在实例列表复制实例 ID。
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
                     * 获取查询日志的开启时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     * @return StartTime 查询日志的开启时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询日志的开启时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     * @param _startTime 查询日志的开启时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
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
                     * 获取查询日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     * @return EndTime 查询日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     * @param _endTime 查询日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
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
                     * 获取节点 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)的**节点管理**页面获取查询的节点 ID。
                     * @return NodeNames 节点 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)的**节点管理**页面获取查询的节点 ID。
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置节点 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)的**节点管理**页面获取查询的节点 ID。
                     * @param _nodeNames 节点 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)的**节点管理**页面获取查询的节点 ID。
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取日志类别。
- 日志类别包括但不限于 COMMAND、ACCESS、CONTROL、FTDC、INDEX、NETWORK、QUERY、REPL、SHARDING、STORAGE、RECOVERY、JOURNAL 和 WRITE 等。具体支持的类别可能会因 MongoDB 的版本而存在差异。具体信息，请参见[日志消息](https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples)。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，也可查看**日志类别**。
                     * @return LogComponents 日志类别。
- 日志类别包括但不限于 COMMAND、ACCESS、CONTROL、FTDC、INDEX、NETWORK、QUERY、REPL、SHARDING、STORAGE、RECOVERY、JOURNAL 和 WRITE 等。具体支持的类别可能会因 MongoDB 的版本而存在差异。具体信息，请参见[日志消息](https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples)。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，也可查看**日志类别**。
                     * 
                     */
                    std::vector<std::string> GetLogComponents() const;

                    /**
                     * 设置日志类别。
- 日志类别包括但不限于 COMMAND、ACCESS、CONTROL、FTDC、INDEX、NETWORK、QUERY、REPL、SHARDING、STORAGE、RECOVERY、JOURNAL 和 WRITE 等。具体支持的类别可能会因 MongoDB 的版本而存在差异。具体信息，请参见[日志消息](https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples)。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，也可查看**日志类别**。
                     * @param _logComponents 日志类别。
- 日志类别包括但不限于 COMMAND、ACCESS、CONTROL、FTDC、INDEX、NETWORK、QUERY、REPL、SHARDING、STORAGE、RECOVERY、JOURNAL 和 WRITE 等。具体支持的类别可能会因 MongoDB 的版本而存在差异。具体信息，请参见[日志消息](https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples)。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，也可查看**日志类别**。
                     * 
                     */
                    void SetLogComponents(const std::vector<std::string>& _logComponents);

                    /**
                     * 判断参数 LogComponents 是否已赋值
                     * @return LogComponents 是否已赋值
                     * 
                     */
                    bool LogComponentsHasBeenSet() const;

                    /**
                     * 获取日志级别。
- 日志级别按严重性从高到低依次为：FATAL、ERROR、WARNING。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志级别**。
                     * @return LogLevels 日志级别。
- 日志级别按严重性从高到低依次为：FATAL、ERROR、WARNING。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志级别**。
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置日志级别。
- 日志级别按严重性从高到低依次为：FATAL、ERROR、WARNING。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志级别**。
                     * @param _logLevels 日志级别。
- 日志级别按严重性从高到低依次为：FATAL、ERROR、WARNING。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志级别**。
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取日志 ID。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志 ID**。
                     * @return LogIds 日志 ID。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志 ID**。
                     * 
                     */
                    std::vector<std::string> GetLogIds() const;

                    /**
                     * 设置日志 ID。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志 ID**。
                     * @param _logIds 日志 ID。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志 ID**。
                     * 
                     */
                    void SetLogIds(const std::vector<std::string>& _logIds);

                    /**
                     * 判断参数 LogIds 是否已赋值
                     * @return LogIds 是否已赋值
                     * 
                     */
                    bool LogIdsHasBeenSet() const;

                    /**
                     * 获取日志连接信息。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志连接信息**。
                     * @return LogConnections 日志连接信息。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志连接信息**。
                     * 
                     */
                    std::vector<std::string> GetLogConnections() const;

                    /**
                     * 设置日志连接信息。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志连接信息**。
                     * @param _logConnections 日志连接信息。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志连接信息**。
                     * 
                     */
                    void SetLogConnections(const std::vector<std::string>& _logConnections);

                    /**
                     * 判断参数 LogConnections 是否已赋值
                     * @return LogConnections 是否已赋值
                     * 
                     */
                    bool LogConnectionsHasBeenSet() const;

                    /**
                     * 获取指定日志筛选的字段。
                     * @return LogDetailParams 指定日志筛选的字段。
                     * 
                     */
                    std::vector<std::string> GetLogDetailParams() const;

                    /**
                     * 设置指定日志筛选的字段。
                     * @param _logDetailParams 指定日志筛选的字段。
                     * 
                     */
                    void SetLogDetailParams(const std::vector<std::string>& _logDetailParams);

                    /**
                     * 判断参数 LogDetailParams 是否已赋值
                     * @return LogDetailParams 是否已赋值
                     * 
                     */
                    bool LogDetailParamsHasBeenSet() const;

                    /**
                     * 获取偏移量，最小值为0，最大值为10000，默认值为0。
                     * @return Offset 偏移量，最小值为0，最大值为10000，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，最小值为0，最大值为10000，默认值为0。
                     * @param _offset 偏移量，最小值为0，最大值为10000，默认值为0。
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
                     * 获取分页大小，最小值为1，最大值为100，默认值为20。
                     * @return Limit 分页大小，最小值为1，最大值为100，默认值为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，最小值为1，最大值为100，默认值为20。
                     * @param _limit 分页大小，最小值为1，最大值为100，默认值为20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb#/)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询日志的开启时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。
- 查询时间范围：仅支持查询最近 7 天内的日志数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 节点 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)的**节点管理**页面获取查询的节点 ID。
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * 日志类别。
- 日志类别包括但不限于 COMMAND、ACCESS、CONTROL、FTDC、INDEX、NETWORK、QUERY、REPL、SHARDING、STORAGE、RECOVERY、JOURNAL 和 WRITE 等。具体支持的类别可能会因 MongoDB 的版本而存在差异。具体信息，请参见[日志消息](https://www.mongodb.com/zh-cn/docs/v5.0/reference/log-messages/#log-message-examples)。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，也可查看**日志类别**。
                     */
                    std::vector<std::string> m_logComponents;
                    bool m_logComponentsHasBeenSet;

                    /**
                     * 日志级别。
- 日志级别按严重性从高到低依次为：FATAL、ERROR、WARNING。
- 登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志级别**。
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * 日志 ID。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志 ID**。
                     */
                    std::vector<std::string> m_logIds;
                    bool m_logIdsHasBeenSet;

                    /**
                     * 日志连接信息。登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在**日志管理**页面的**错误日志**页签，可查看**日志连接信息**。
                     */
                    std::vector<std::string> m_logConnections;
                    bool m_logConnectionsHasBeenSet;

                    /**
                     * 指定日志筛选的字段。
                     */
                    std::vector<std::string> m_logDetailParams;
                    bool m_logDetailParamsHasBeenSet;

                    /**
                     * 偏移量，最小值为0，最大值为10000，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，最小值为1，最大值为100，默认值为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSREQUEST_H_
