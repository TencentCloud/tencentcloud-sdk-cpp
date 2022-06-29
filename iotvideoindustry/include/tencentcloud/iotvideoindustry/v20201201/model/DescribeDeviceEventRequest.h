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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEEVENTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeDeviceEvent请求参数结构体
                */
                class DescribeDeviceEventRequest : public AbstractModel
                {
                public:
                    DescribeDeviceEventRequest();
                    ~DescribeDeviceEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，秒级时间戳
                     * @return StartTime 开始时间，秒级时间戳
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间，秒级时间戳
                     * @param StartTime 开始时间，秒级时间戳
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，秒级时间戳
                     * @return EndTime 结束时间，秒级时间戳
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，秒级时间戳
                     * @param EndTime 结束时间，秒级时间戳
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取设备Id
                     * @return DeviceId 设备Id
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param DeviceId 设备Id
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取默认为全部 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     * @return EventTypes 默认为全部 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     */
                    std::vector<int64_t> GetEventTypes() const;

                    /**
                     * 设置默认为全部 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     * @param EventTypes 默认为全部 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     */
                    void SetEventTypes(const std::vector<int64_t>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取偏移值
                     * @return Offset 偏移值
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param Offset 偏移值
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取limit限制值
                     * @return Limit limit限制值
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置limit限制值
                     * @param Limit limit限制值
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 开始时间，秒级时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，秒级时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 默认为全部 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     */
                    std::vector<int64_t> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * 偏移值
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * limit限制值
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEEVENTREQUEST_H_
