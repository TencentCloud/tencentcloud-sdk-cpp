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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_

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
                * DescribeDetailedSlowLogs请求参数结构体
                */
                class DescribeDetailedSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeDetailedSlowLogsRequest();
                    ~DescribeDetailedSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取指定查询慢日志的开始时间。- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     * @return StartTime 指定查询慢日志的开始时间。- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置指定查询慢日志的开始时间。- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     * @param _startTime 指定查询慢日志的开始时间。- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
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
                     * 获取指定查询慢日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-02 12:00:00。
- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     * @return EndTime 指定查询慢日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-02 12:00:00。
- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置指定查询慢日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-02 12:00:00。
- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     * @param _endTime 指定查询慢日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-02 12:00:00。
- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
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
                     * 获取指定慢日志查询阈值，即查询执行时间大于此值的慢日志。单位：ms，默认值：100。
                     * @return ExecTime 指定慢日志查询阈值，即查询执行时间大于此值的慢日志。单位：ms，默认值：100。
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置指定慢日志查询阈值，即查询执行时间大于此值的慢日志。单位：ms，默认值：100。
                     * @param _execTime 指定慢日志查询阈值，即查询执行时间大于此值的慢日志。单位：ms，默认值：100。
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取指定查询慢日志的命令类型。
                     * @return Commands 指定查询慢日志的命令类型。
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置指定查询慢日志的命令类型。
                     * @param _commands 指定查询慢日志的命令类型。
                     * 
                     */
                    void SetCommands(const std::vector<std::string>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                    /**
                     * 获取全文搜索关键字，多个关键字间为或关系。
                     * @return Texts 全文搜索关键字，多个关键字间为或关系。
                     * 
                     */
                    std::vector<std::string> GetTexts() const;

                    /**
                     * 设置全文搜索关键字，多个关键字间为或关系。
                     * @param _texts 全文搜索关键字，多个关键字间为或关系。
                     * 
                     */
                    void SetTexts(const std::vector<std::string>& _texts);

                    /**
                     * 判断参数 Texts 是否已赋值
                     * @return Texts 是否已赋值
                     * 
                     */
                    bool TextsHasBeenSet() const;

                    /**
                     * 获取指定查询慢日志的节点名称。请通过接口 [DescribeDBInstanceNodeProperty](https://cloud.tencent.com/document/product/240/82022) 查询节点名称。
                     * @return NodeNames 指定查询慢日志的节点名称。请通过接口 [DescribeDBInstanceNodeProperty](https://cloud.tencent.com/document/product/240/82022) 查询节点名称。
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置指定查询慢日志的节点名称。请通过接口 [DescribeDBInstanceNodeProperty](https://cloud.tencent.com/document/product/240/82022) 查询节点名称。
                     * @param _nodeNames 指定查询慢日志的节点名称。请通过接口 [DescribeDBInstanceNodeProperty](https://cloud.tencent.com/document/product/240/82022) 查询节点名称。
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
                     * 获取指定查询 queryHash 值。
                     * @return QueryHash 指定查询 queryHash 值。
                     * 
                     */
                    std::vector<std::string> GetQueryHash() const;

                    /**
                     * 设置指定查询 queryHash 值。
                     * @param _queryHash 指定查询 queryHash 值。
                     * 
                     */
                    void SetQueryHash(const std::vector<std::string>& _queryHash);

                    /**
                     * 判断参数 QueryHash 是否已赋值
                     * @return QueryHash 是否已赋值
                     * 
                     */
                    bool QueryHashHasBeenSet() const;

                    /**
                     * 获取分页偏移量。默认值：0。取值范围：[0,100]。

                     * @return Offset 分页偏移量。默认值：0。取值范围：[0,100]。

                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。默认值：0。取值范围：[0,100]。

                     * @param _offset 分页偏移量。默认值：0。取值范围：[0,100]。

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
                     * 获取返回条数。默认值：20。取值范围：[0,10000]
                     * @return Limit 返回条数。默认值：20。取值范围：[0,10000]
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回条数。默认值：20。取值范围：[0,10000]
                     * @param _limit 返回条数。默认值：20。取值范围：[0,10000]
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
                     * 获取指定慢日志排序条件。
- StartTime：按照慢日志生成时间排序。
- ExecTime：按照慢日志执行时间排序。
                     * @return OrderBy 指定慢日志排序条件。
- StartTime：按照慢日志生成时间排序。
- ExecTime：按照慢日志执行时间排序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置指定慢日志排序条件。
- StartTime：按照慢日志生成时间排序。
- ExecTime：按照慢日志执行时间排序。
                     * @param _orderBy 指定慢日志排序条件。
- StartTime：按照慢日志生成时间排序。
- ExecTime：按照慢日志执行时间排序。
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
                     * 获取指定排序方式。
- desc：倒序。
- asc：顺序。
                     * @return OrderByType 指定排序方式。
- desc：倒序。
- asc：顺序。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置指定排序方式。
- desc：倒序。
- asc：顺序。
                     * @param _orderByType 指定排序方式。
- desc：倒序。
- asc：顺序。
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
                     * 实例 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定查询慢日志的开始时间。- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-01 10:00:00。- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 指定查询慢日志的结束时间。
- 格式：yyyy-mm-dd hh:mm:ss，如：2019-06-02 12:00:00。
- 查询起止时间间隔不能超过24小时，只允许查询最近7天内慢日志。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定慢日志查询阈值，即查询执行时间大于此值的慢日志。单位：ms，默认值：100。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 指定查询慢日志的命令类型。
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * 全文搜索关键字，多个关键字间为或关系。
                     */
                    std::vector<std::string> m_texts;
                    bool m_textsHasBeenSet;

                    /**
                     * 指定查询慢日志的节点名称。请通过接口 [DescribeDBInstanceNodeProperty](https://cloud.tencent.com/document/product/240/82022) 查询节点名称。
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * 指定查询 queryHash 值。
                     */
                    std::vector<std::string> m_queryHash;
                    bool m_queryHashHasBeenSet;

                    /**
                     * 分页偏移量。默认值：0。取值范围：[0,100]。

                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回条数。默认值：20。取值范围：[0,10000]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定慢日志排序条件。
- StartTime：按照慢日志生成时间排序。
- ExecTime：按照慢日志执行时间排序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 指定排序方式。
- desc：倒序。
- asc：顺序。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_
