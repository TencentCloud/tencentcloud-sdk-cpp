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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWSERVEREVENTSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWSERVEREVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EventItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeMlflowServerEvents返回参数结构体
                */
                class DescribeMlflowServerEventsResponse : public AbstractModel
                {
                public:
                    DescribeMlflowServerEventsResponse();
                    ~DescribeMlflowServerEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>翻页上下文，下一次分页请求时传入此值</p>
                     * @return Context <p>翻页上下文，下一次分页请求时传入此值</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>是否已经返回所有符合条件的日志，true 表示已全部返回</p>
                     * @return ListOver <p>是否已经返回所有符合条件的日志，true 表示已全部返回</p>
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取<p>本次检索实际使用的起始时间（Unix 时间戳，毫秒）</p>
                     * @return StartTime <p>本次检索实际使用的起始时间（Unix 时间戳，毫秒）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>本次检索实际使用的结束时间（Unix 时间戳，毫秒）</p>
                     * @return EndTime <p>本次检索实际使用的结束时间（Unix 时间戳，毫秒）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>事件列表</p>
                     * @return Events <p>事件列表</p>
                     * 
                     */
                    std::vector<EventItem> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * <p>翻页上下文，下一次分页请求时传入此值</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>是否已经返回所有符合条件的日志，true 表示已全部返回</p>
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * <p>本次检索实际使用的起始时间（Unix 时间戳，毫秒）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>本次检索实际使用的结束时间（Unix 时间戳，毫秒）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>事件列表</p>
                     */
                    std::vector<EventItem> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMLFLOWSERVEREVENTSRESPONSE_H_
