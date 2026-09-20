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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTSRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/EventInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeEvents返回参数结构体
                */
                class DescribeEventsResponse : public AbstractModel
                {
                public:
                    DescribeEventsResponse();
                    ~DescribeEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件列表。</p>
                     * @return Events <p>事件列表。</p>
                     * 
                     */
                    std::vector<EventInfo> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的事件总数。</p>
                     * @return TotalCount <p>符合条件的事件总数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>事件列表。</p>
                     */
                    std::vector<EventInfo> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <p>符合条件的事件总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEEVENTSRESPONSE_H_
