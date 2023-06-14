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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETEVENTSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeFleetEvents请求参数结构体
                */
                class DescribeFleetEventsRequest : public AbstractModel
                {
                public:
                    DescribeFleetEventsRequest();
                    ~DescribeFleetEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Id
                     * @return FleetId 服务器舰队 Id
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队 Id
                     * @param _fleetId 服务器舰队 Id
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取分页时返回服务器舰队事件的数量，默认为20，最大值为100
                     * @return Limit 分页时返回服务器舰队事件的数量，默认为20，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页时返回服务器舰队事件的数量，默认为20，最大值为100
                     * @param _limit 分页时返回服务器舰队事件的数量，默认为20，最大值为100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页时的数据偏移量，默认为0
                     * @return Offset 分页时的数据偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页时的数据偏移量，默认为0
                     * @param _offset 分页时的数据偏移量，默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取事件代码
                     * @return EventCode 事件代码
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件代码
                     * @param _eventCode 事件代码
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取发生事件的开始时间
                     * @return StartTime 发生事件的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置发生事件的开始时间
                     * @param _startTime 发生事件的开始时间
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
                     * 获取发生事件的结束时间
                     * @return EndTime 发生事件的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置发生事件的结束时间
                     * @param _endTime 发生事件的结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 分页时返回服务器舰队事件的数量，默认为20，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页时的数据偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 事件代码
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * 发生事件的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 发生事件的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETEVENTSREQUEST_H_
