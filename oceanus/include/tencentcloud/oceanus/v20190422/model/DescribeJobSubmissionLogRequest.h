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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取作业ID，例如：cql-6v1jkxrn
                     * @return JobId 作业ID，例如：cql-6v1jkxrn
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID，例如：cql-6v1jkxrn
                     * @param _jobId 作业ID，例如：cql-6v1jkxrn
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
                     * 获取起始时间，unix时间戳，毫秒级，例如：1611754219108
                     * @return StartTime 起始时间，unix时间戳，毫秒级，例如：1611754219108
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间，unix时间戳，毫秒级，例如：1611754219108
                     * @param _startTime 起始时间，unix时间戳，毫秒级，例如：1611754219108
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
                     * 获取结束时间，unix时间戳，毫秒级，例如：1611754219108
                     * @return EndTime 结束时间，unix时间戳，毫秒级，例如：1611754219108
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，unix时间戳，毫秒级，例如：1611754219108
                     * @param _endTime 结束时间，unix时间戳，毫秒级，例如：1611754219108
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
                     * 获取作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志
                     * @return RunningOrderId 作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志
                     * 
                     */
                    int64_t GetRunningOrderId() const;

                    /**
                     * 设置作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志
                     * @param _runningOrderId 作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志
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
                     * 获取日志搜索的关键词，默认为空
                     * @return Keyword 日志搜索的关键词，默认为空
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置日志搜索的关键词，默认为空
                     * @param _keyword 日志搜索的关键词，默认为空
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
                     * 获取日志搜索的游标，可透传上次返回的值，默认为空
                     * @return Cursor 日志搜索的游标，可透传上次返回的值，默认为空
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置日志搜索的游标，可透传上次返回的值，默认为空
                     * @param _cursor 日志搜索的游标，可透传上次返回的值，默认为空
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
                     * 获取时间戳排序规则，asc - 升序，desc - 降序。默认为升序
                     * @return OrderType 时间戳排序规则，asc - 升序，desc - 降序。默认为升序
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置时间戳排序规则，asc - 升序，desc - 降序。默认为升序
                     * @param _orderType 时间戳排序规则，asc - 升序，desc - 降序。默认为升序
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
                     * 获取搜索的日志条数上限值，最大为100
                     * @return Limit 搜索的日志条数上限值，最大为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置搜索的日志条数上限值，最大为100
                     * @param _limit 搜索的日志条数上限值，最大为100
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
                     * 作业ID，例如：cql-6v1jkxrn
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 起始时间，unix时间戳，毫秒级，例如：1611754219108
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，unix时间戳，毫秒级，例如：1611754219108
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 作业运行的实例ID, 例如：1,2,3。默认为0，表示未选中任何实例，搜索该时间段内最近的一个实例的日志
                     */
                    int64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * 日志搜索的关键词，默认为空
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 日志搜索的游标，可透传上次返回的值，默认为空
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 时间戳排序规则，asc - 升序，desc - 降序。默认为升序
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 搜索的日志条数上限值，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGREQUEST_H_
