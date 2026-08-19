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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULEPLANLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULEPLANLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAISchedulePlanList请求参数结构体
                */
                class DescribeAISchedulePlanListRequest : public AbstractModel
                {
                public:
                    DescribeAISchedulePlanListRequest();
                    ~DescribeAISchedulePlanListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * @return ScheduleId <p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * @param _scheduleId <p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取<p>预览窗口开始时间，Unix 毫秒时间戳，0 表示当前时间。</p>
                     * @return StartTime <p>预览窗口开始时间，Unix 毫秒时间戳，0 表示当前时间。</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>预览窗口开始时间，Unix 毫秒时间戳，0 表示当前时间。</p>
                     * @param _startTime <p>预览窗口开始时间，Unix 毫秒时间戳，0 表示当前时间。</p>
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
                     * 获取<p>预览窗口结束时间，Unix 毫秒时间戳。</p>
                     * @return EndTime <p>预览窗口结束时间，Unix 毫秒时间戳。</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>预览窗口结束时间，Unix 毫秒时间戳。</p>
                     * @param _endTime <p>预览窗口结束时间，Unix 毫秒时间戳。</p>
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
                     * 获取<p>分页偏移量，默认 0。</p>
                     * @return Offset <p>分页偏移量，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认 0。</p>
                     * @param _offset <p>分页偏移量，默认 0。</p>
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
                     * 获取<p>最大返回条数，默认 20，最大 100。</p>
                     * @return Limit <p>最大返回条数，默认 20，最大 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>最大返回条数，默认 20，最大 100。</p>
                     * @param _limit <p>最大返回条数，默认 20，最大 100。</p>
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
                     * <p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * <p>预览窗口开始时间，Unix 毫秒时间戳，0 表示当前时间。</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>预览窗口结束时间，Unix 毫秒时间戳。</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页偏移量，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>最大返回条数，默认 20，最大 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULEPLANLISTREQUEST_H_
