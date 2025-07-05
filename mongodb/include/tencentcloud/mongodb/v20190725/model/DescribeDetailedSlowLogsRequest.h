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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取待查询慢日志的开始时间
                     * @return StartTime 待查询慢日志的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置待查询慢日志的开始时间
                     * @param _startTime 待查询慢日志的开始时间
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
                     * 获取待慢日志的结束时间
                     * @return EndTime 待慢日志的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置待慢日志的结束时间
                     * @param _endTime 待慢日志的结束时间
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
                     * 获取过滤执行时间大于此值的慢日志，单位ms，默认值100
                     * @return ExecTime 过滤执行时间大于此值的慢日志，单位ms，默认值100
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置过滤执行时间大于此值的慢日志，单位ms，默认值100
                     * @param _execTime 过滤执行时间大于此值的慢日志，单位ms，默认值100
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
                     * 获取过滤慢日志的命令类型
                     * @return Commands 过滤慢日志的命令类型
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置过滤慢日志的命令类型
                     * @param _commands 过滤慢日志的命令类型
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
                     * 获取全文搜索关键字，多个关键字间为或关系
                     * @return Texts 全文搜索关键字，多个关键字间为或关系
                     * 
                     */
                    std::vector<std::string> GetTexts() const;

                    /**
                     * 设置全文搜索关键字，多个关键字间为或关系
                     * @param _texts 全文搜索关键字，多个关键字间为或关系
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
                     * 获取根据节点名过滤
                     * @return NodeNames 根据节点名过滤
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置根据节点名过滤
                     * @param _nodeNames 根据节点名过滤
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
                     * 获取根据queryHash过滤
                     * @return QueryHash 根据queryHash过滤
                     * 
                     */
                    std::vector<std::string> GetQueryHash() const;

                    /**
                     * 设置根据queryHash过滤
                     * @param _queryHash 根据queryHash过滤
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取返回条数
                     * @return Limit 返回条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回条数
                     * @param _limit 返回条数
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
                     * 获取排序条件，只支持StartTime(按慢日志生成时间)和ExecTime(慢日志执行时间)
                     * @return OrderBy 排序条件，只支持StartTime(按慢日志生成时间)和ExecTime(慢日志执行时间)
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序条件，只支持StartTime(按慢日志生成时间)和ExecTime(慢日志执行时间)
                     * @param _orderBy 排序条件，只支持StartTime(按慢日志生成时间)和ExecTime(慢日志执行时间)
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
                     * 获取排序。desc倒排，asc正排
                     * @return OrderByType 排序。desc倒排，asc正排
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序。desc倒排，asc正排
                     * @param _orderByType 排序。desc倒排，asc正排
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
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 待查询慢日志的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 待慢日志的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 过滤执行时间大于此值的慢日志，单位ms，默认值100
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 过滤慢日志的命令类型
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * 全文搜索关键字，多个关键字间为或关系
                     */
                    std::vector<std::string> m_texts;
                    bool m_textsHasBeenSet;

                    /**
                     * 根据节点名过滤
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * 根据queryHash过滤
                     */
                    std::vector<std::string> m_queryHash;
                    bool m_queryHashHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序条件，只支持StartTime(按慢日志生成时间)和ExecTime(慢日志执行时间)
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序。desc倒排，asc正排
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDETAILEDSLOWLOGSREQUEST_H_
