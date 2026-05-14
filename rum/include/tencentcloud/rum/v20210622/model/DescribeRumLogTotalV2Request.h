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
                     * 获取排序方式 desc asc
                     * @return OrderBy 排序方式 desc asc
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序方式 desc asc
                     * @param _orderBy 排序方式 desc asc
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
                     * 获取开始时间（必填）格式为时间戳 毫秒
                     * @return StartTime 开始时间（必填）格式为时间戳 毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间（必填）格式为时间戳 毫秒
                     * @param _startTime 开始时间（必填）格式为时间戳 毫秒
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
                     * 获取单次查询返回的原始日志条数，最大值为100（必填）
                     * @return Limit 单次查询返回的原始日志条数，最大值为100（必填）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的原始日志条数，最大值为100（必填）
                     * @param _limit 单次查询返回的原始日志条数，最大值为100（必填）
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
                     * 获取查询的相关参数
                     * @return Filter 查询的相关参数
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置查询的相关参数
                     * @param _filter 查询的相关参数
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
                     * 获取结束时间（必填）格式为时间戳 毫秒
                     * @return EndTime 结束时间（必填）格式为时间戳 毫秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间（必填）格式为时间戳 毫秒
                     * @param _endTime 结束时间（必填）格式为时间戳 毫秒
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
                     * 获取项目ID（必填）
                     * @return ID 项目ID（必填）
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID（必填）
                     * @param _iD 项目ID（必填）
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
                     * 获取上次查询的最后一个日志的时间戳
                     * @return LastTime 上次查询的最后一个日志的时间戳
                     * 
                     */
                    int64_t GetLastTime() const;

                    /**
                     * 设置上次查询的最后一个日志的时间戳
                     * @param _lastTime 上次查询的最后一个日志的时间戳
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
                     * 获取上次查询的最后一个日志的rowId
                     * @return LastRowId 上次查询的最后一个日志的rowId
                     * 
                     */
                    int64_t GetLastRowId() const;

                    /**
                     * 设置上次查询的最后一个日志的rowId
                     * @param _lastRowId 上次查询的最后一个日志的rowId
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
                     * 排序方式 desc asc
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 开始时间（必填）格式为时间戳 毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 单次查询返回的原始日志条数，最大值为100（必填）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的相关参数
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 结束时间（必填）格式为时间戳 毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 项目ID（必填）
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 上次查询的最后一个日志的时间戳
                     */
                    int64_t m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 上次查询的最后一个日志的rowId
                     */
                    int64_t m_lastRowId;
                    bool m_lastRowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGTOTALV2REQUEST_H_
