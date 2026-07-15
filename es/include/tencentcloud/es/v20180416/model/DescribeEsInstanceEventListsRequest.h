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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEESINSTANCEEVENTLISTSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEESINSTANCEEVENTLISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeEsInstanceEventLists请求参数结构体
                */
                class DescribeEsInstanceEventListsRequest : public AbstractModel
                {
                public:
                    DescribeEsInstanceEventListsRequest();
                    ~DescribeEsInstanceEventListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取起始时间, e.g. "2019-03-07 16:30:39"
                     * @return StartTime 起始时间, e.g. "2019-03-07 16:30:39"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间, e.g. "2019-03-07 16:30:39"
                     * @param _startTime 起始时间, e.g. "2019-03-07 16:30:39"
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间, e.g. "2019-03-30 20:18:03"
                     * @return EndTime 结束时间, e.g. "2019-03-30 20:18:03"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间, e.g. "2019-03-30 20:18:03"
                     * @param _endTime 结束时间, e.g. "2019-03-30 20:18:03"
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取集群id，非必填，查询集群相关的事件
                     * @return InstanceIds 集群id，非必填，查询集群相关的事件
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置集群id，非必填，查询集群相关的事件
                     * @param _instanceIds 集群id，非必填，查询集群相关的事件
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取查询的类型，包括：硬件异常、用户变更和智能运维等，默认查询所有。1：硬件异常；2：用户变更；3：智能运维
                     * @return EventTypes 查询的类型，包括：硬件异常、用户变更和智能运维等，默认查询所有。1：硬件异常；2：用户变更；3：智能运维
                     * 
                     */
                    std::vector<int64_t> GetEventTypes() const;

                    /**
                     * 设置查询的类型，包括：硬件异常、用户变更和智能运维等，默认查询所有。1：硬件异常；2：用户变更；3：智能运维
                     * @param _eventTypes 查询的类型，包括：硬件异常、用户变更和智能运维等，默认查询所有。1：硬件异常；2：用户变更；3：智能运维
                     * 
                     */
                    void SetEventTypes(const std::vector<int64_t>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     * 
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取事件状态
                     * @return EventStatus 事件状态
                     * 
                     */
                    std::vector<int64_t> GetEventStatus() const;

                    /**
                     * 设置事件状态
                     * @param _eventStatus 事件状态
                     * 
                     */
                    void SetEventStatus(const std::vector<int64_t>& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 起始时间, e.g. "2019-03-07 16:30:39"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间, e.g. "2019-03-30 20:18:03"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 集群id，非必填，查询集群相关的事件
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 查询的类型，包括：硬件异常、用户变更和智能运维等，默认查询所有。1：硬件异常；2：用户变更；3：智能运维
                     */
                    std::vector<int64_t> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * 事件状态
                     */
                    std::vector<int64_t> m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEESINSTANCEEVENTLISTSREQUEST_H_
