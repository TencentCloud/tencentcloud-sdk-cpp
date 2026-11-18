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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Filter.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobSubmissionLog请求参数结构体
                */
                class DescribeJobSubmissionLogRequest : public AbstractModel
                {
                public:
                    DescribeJobSubmissionLogRequest();
                    ~DescribeJobSubmissionLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业ID，例如：cql-6v1jkxrn</p>
                     * @return JobId <p>作业ID，例如：cql-6v1jkxrn</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业ID，例如：cql-6v1jkxrn</p>
                     * @param _jobId <p>作业ID，例如：cql-6v1jkxrn</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>起始时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     * @return StartTime <p>起始时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>起始时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     * @param _startTime <p>起始时间，unix时间戳，毫秒级，例如：1611754219108</p>
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
                     * 获取<p>结束时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     * @return EndTime <p>结束时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     * @param _endTime <p>结束时间，unix时间戳，毫秒级，例如：1611754219108</p>
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
                     * 获取<p>作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志</p>
                     * @return RunningOrderId <p>作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志</p>
                     * 
                     */
                    int64_t GetRunningOrderId() const;

                    /**
                     * 设置<p>作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志</p>
                     * @param _runningOrderId <p>作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志</p>
                     * 
                     */
                    void SetRunningOrderId(const int64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                    /**
                     * 获取<p>日志搜索的关键词，默认为空</p>
                     * @return Keyword <p>日志搜索的关键词，默认为空</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>日志搜索的关键词，默认为空</p>
                     * @param _keyword <p>日志搜索的关键词，默认为空</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>日志搜索的游标，可透传上次返回的值，默认为空</p>
                     * @return Cursor <p>日志搜索的游标，可透传上次返回的值，默认为空</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置<p>日志搜索的游标，可透传上次返回的值，默认为空</p>
                     * @param _cursor <p>日志搜索的游标，可透传上次返回的值，默认为空</p>
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取<p>时间戳排序规则，asc - 升序，desc - 降序。默认为升序</p>
                     * @return OrderType <p>时间戳排序规则，asc - 升序，desc - 降序。默认为升序</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>时间戳排序规则，asc - 升序，desc - 降序。默认为升序</p>
                     * @param _orderType <p>时间戳排序规则，asc - 升序，desc - 降序。默认为升序</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>搜索的日志条数上限值，最大为100</p>
                     * @return Limit <p>搜索的日志条数上限值，最大为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>搜索的日志条数上限值，最大为100</p>
                     * @param _limit <p>搜索的日志条数上限值，最大为100</p>
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
                     * 获取<p>分页偏移</p>
                     * @return Offset <p>分页偏移</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移</p>
                     * @param _offset <p>分页偏移</p>
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
                     * 获取<p>过滤</p>
                     * @return Filters <p>过滤</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤</p>
                     * @param _filters <p>过滤</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>作业ID，例如：cql-6v1jkxrn</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>起始时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，unix时间戳，毫秒级，例如：1611754219108</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志</p>
                     */
                    int64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * <p>日志搜索的关键词，默认为空</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>日志搜索的游标，可透传上次返回的值，默认为空</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * <p>时间戳排序规则，asc - 升序，desc - 降序。默认为升序</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>搜索的日志条数上限值，最大为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGREQUEST_H_
