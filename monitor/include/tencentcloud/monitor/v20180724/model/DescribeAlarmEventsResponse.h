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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMEVENTSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmEvent.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmEvents返回参数结构体
                */
                class DescribeAlarmEventsResponse : public AbstractModel
                {
                public:
                    DescribeAlarmEventsResponse();
                    ~DescribeAlarmEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警事件列表
                     * @return Events 告警事件列表
                     * 
                     */
                    std::vector<AlarmEvent> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * 告警事件列表
                     */
                    std::vector<AlarmEvent> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMEVENTSRESPONSE_H_
