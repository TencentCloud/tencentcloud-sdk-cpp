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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGTOTALV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGTOTALV2REQUEST_H_

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
                * DescribeRumLogTotalV2请求参数结构体
                */
                class DescribeRumLogTotalV2Request : public AbstractModel
                {
                public:
                    DescribeRumLogTotalV2Request();
                    ~DescribeRumLogTotalV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>排序方式 desc asc</p>
                     * @return OrderBy <p>排序方式 desc asc</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方式 desc asc</p>
                     * @param _orderBy <p>排序方式 desc asc</p>
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
                     * 获取<p>查询日志开始时间（必填）格式为时间戳 毫秒</p>
                     * @return StartTime <p>查询日志开始时间（必填）格式为时间戳 毫秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>查询日志开始时间（必填）格式为时间戳 毫秒</p>
                     * @param _startTime <p>查询日志开始时间（必填）格式为时间戳 毫秒</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * @return Limit <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * @param _limit <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
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
                     * 获取<p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：https://cloud.tencent.com/document/product/248/87223</p>
                     * @return Filter <p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：https://cloud.tencent.com/document/product/248/87223</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：https://cloud.tencent.com/document/product/248/87223</p>
                     * @param _filter <p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：https://cloud.tencent.com/document/product/248/87223</p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>查询日志结束时间（必填）格式为时间戳 毫秒</p>
                     * @return EndTime <p>查询日志结束时间（必填）格式为时间戳 毫秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>查询日志结束时间（必填）格式为时间戳 毫秒</p>
                     * @param _endTime <p>查询日志结束时间（必填）格式为时间戳 毫秒</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID（必填）</p>
                     * @return ID <p>项目ID（必填）</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>项目ID（必填）</p>
                     * @param _iD <p>项目ID（必填）</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>上次查询的最后一个日志的时间戳</p>
                     * @return LastTime <p>上次查询的最后一个日志的时间戳</p>
                     * 
                     */
                    int64_t GetLastTime() const;

                    /**
                     * 设置<p>上次查询的最后一个日志的时间戳</p>
                     * @param _lastTime <p>上次查询的最后一个日志的时间戳</p>
                     * 
                     */
                    void SetLastTime(const int64_t& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次查询的最后一个日志的rowId</p>
                     * @return LastRowId <p>上次查询的最后一个日志的rowId</p>
                     * 
                     */
                    int64_t GetLastRowId() const;

                    /**
                     * 设置<p>上次查询的最后一个日志的rowId</p>
                     * @param _lastRowId <p>上次查询的最后一个日志的rowId</p>
                     * 
                     */
                    void SetLastRowId(const int64_t& _lastRowId);

                    /**
                     * 判断参数 LastRowId 是否已赋值
                     * @return LastRowId 是否已赋值
                     * 
                     */
                    bool LastRowIdHasBeenSet() const;

                private:

                    /**
                     * <p>排序方式 desc asc</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>查询日志开始时间（必填）格式为时间戳 毫秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：https://cloud.tencent.com/document/product/248/87223</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>查询日志结束时间（必填）格式为时间戳 毫秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID（必填）</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>上次查询的最后一个日志的时间戳</p>
                     */
                    int64_t m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * <p>上次查询的最后一个日志的rowId</p>
                     */
                    int64_t m_lastRowId;
                    bool m_lastRowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGTOTALV2REQUEST_H_
