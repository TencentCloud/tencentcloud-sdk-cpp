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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEEVENTTASKSRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEEVENTTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/EventTask.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeEventTasks返回参数结构体
                */
                class DescribeEventTasksResponse : public AbstractModel
                {
                public:
                    DescribeEventTasksResponse();
                    ~DescribeEventTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取产生的事件任务
                     * @return EventTasks 产生的事件任务
                     * 
                     */
                    std::vector<EventTask> GetEventTasks() const;

                    /**
                     * 判断参数 EventTasks 是否已赋值
                     * @return EventTasks 是否已赋值
                     * 
                     */
                    bool EventTasksHasBeenSet() const;

                    /**
                     * 获取事件任务总数
                     * @return TotalCount 事件任务总数
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
                     * 产生的事件任务
                     */
                    std::vector<EventTask> m_eventTasks;
                    bool m_eventTasksHasBeenSet;

                    /**
                     * 事件任务总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEEVENTTASKSRESPONSE_H_
