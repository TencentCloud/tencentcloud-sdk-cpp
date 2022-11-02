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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeLogList请求参数结构体
                */
                class DescribeLogListRequest : public AbstractModel
                {
                public:
                    DescribeLogListRequest();
                    ~DescribeLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取排序方式  desc  asc（必填）
                     * @return Sort 排序方式  desc  asc（必填）
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序方式  desc  asc（必填）
                     * @param Sort 排序方式  desc  asc（必填）
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取searchlog  histogram（必填）
                     * @return ActionType searchlog  histogram（必填）
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置searchlog  histogram（必填）
                     * @param ActionType searchlog  histogram（必填）
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取项目ID（必填）
                     * @return ID 项目ID（必填）
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID（必填）
                     * @param ID 项目ID（必填）
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取开始时间（必填）
                     * @return StartTime 开始时间（必填）
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（必填）
                     * @param StartTime 开始时间（必填）
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取单次查询返回的原始日志条数，最大值为100（必填）
                     * @return Limit 单次查询返回的原始日志条数，最大值为100（必填）
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的原始日志条数，最大值为100（必填）
                     * @param Limit 单次查询返回的原始日志条数，最大值为100（必填）
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取上下文，加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容，总计最多可获取1万条原始日志。过期时间1小时
                     * @return Context 上下文，加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容，总计最多可获取1万条原始日志。过期时间1小时
                     */
                    std::string GetContext() const;

                    /**
                     * 设置上下文，加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容，总计最多可获取1万条原始日志。过期时间1小时
                     * @param Context 上下文，加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容，总计最多可获取1万条原始日志。过期时间1小时
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取查询语句，参考控制台请求参数，语句长度最大为4096（必填）例："id:120001 AND type:\"log\""
                     * @return Query 查询语句，参考控制台请求参数，语句长度最大为4096（必填）例："id:120001 AND type:\"log\""
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，参考控制台请求参数，语句长度最大为4096（必填）例："id:120001 AND type:\"log\""
                     * @param Query 查询语句，参考控制台请求参数，语句长度最大为4096（必填）例："id:120001 AND type:\"log\""
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取结束时间（必填）
                     * @return EndTime 结束时间（必填）
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（必填）
                     * @param EndTime 结束时间（必填）
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 排序方式  desc  asc（必填）
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * searchlog  histogram（必填）
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 项目ID（必填）
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 开始时间（必填）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 单次查询返回的原始日志条数，最大值为100（必填）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 上下文，加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容，总计最多可获取1万条原始日志。过期时间1小时
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 查询语句，参考控制台请求参数，语句长度最大为4096（必填）例："id:120001 AND type:\"log\""
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 结束时间（必填）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGLISTREQUEST_H_
