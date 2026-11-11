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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTCENTEREVENTSRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTCENTEREVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/EventItem.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeEventCenterEvents返回参数结构体
                */
                class DescribeEventCenterEventsResponse : public AbstractModel
                {
                public:
                    DescribeEventCenterEventsResponse();
                    ~DescribeEventCenterEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>本次查询返回的事件明细或聚合结果列表。无匹配结果时返回空数组。</p>
                     * @return Events <p>本次查询返回的事件明细或聚合结果列表。无匹配结果时返回空数组。</p>
                     * 
                     */
                    std::vector<EventItem> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取<p>符合查询条件的结果总数，不受 Offset 和 Limit 影响。Raw 模式为去重后的事件总数，Aggregate 模式为聚合结果总数。</p>
                     * @return TotalCount <p>符合查询条件的结果总数，不受 Offset 和 Limit 影响。Raw 模式为去重后的事件总数，Aggregate 模式为聚合结果总数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>本次查询实际使用的开始时间，RFC3339 格式，包含该时间点。</p>
                     * @return StartTime <p>本次查询实际使用的开始时间，RFC3339 格式，包含该时间点。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>本次查询实际使用的结束时间，RFC3339 格式，不包含该时间点。</p>
                     * @return EndTime <p>本次查询实际使用的结束时间，RFC3339 格式，不包含该时间点。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>本次查询实际使用的模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式。</li><li>Aggregate： 聚合模式。</li></ul>
                     * @return Mode <p>本次查询实际使用的模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式。</li><li>Aggregate： 聚合模式。</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * <p>本次查询返回的事件明细或聚合结果列表。无匹配结果时返回空数组。</p>
                     */
                    std::vector<EventItem> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <p>符合查询条件的结果总数，不受 Offset 和 Limit 影响。Raw 模式为去重后的事件总数，Aggregate 模式为聚合结果总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>本次查询实际使用的开始时间，RFC3339 格式，包含该时间点。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>本次查询实际使用的结束时间，RFC3339 格式，不包含该时间点。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>本次查询实际使用的模式。</p><p>枚举值：</p><ul><li>Raw： 明细模式。</li><li>Aggregate： 聚合模式。</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTCENTEREVENTSRESPONSE_H_
