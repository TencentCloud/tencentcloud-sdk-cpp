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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_EVENTS_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_EVENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 设备事件列表
                */
                class Events : public AbstractModel
                {
                public:
                    Events();
                    ~Events() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间，秒级时间戳
                     * @return EventTime 开始时间，秒级时间戳
                     * 
                     */
                    int64_t GetEventTime() const;

                    /**
                     * 设置开始时间，秒级时间戳
                     * @param _eventTime 开始时间，秒级时间戳
                     * 
                     */
                    void SetEventTime(const int64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     * @return EventType 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     * @param _eventType 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return EventDesc 事件描述
                     * 
                     */
                    std::string GetEventDesc() const;

                    /**
                     * 设置事件描述
                     * @param _eventDesc 事件描述
                     * 
                     */
                    void SetEventDesc(const std::string& _eventDesc);

                    /**
                     * 判断参数 EventDesc 是否已赋值
                     * @return EventDesc 是否已赋值
                     * 
                     */
                    bool EventDescHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return DeviceType 设备类型
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型
                     * @param _deviceType 设备类型
                     * 
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取设备地址
                     * @return DeviceAddress 设备地址
                     * 
                     */
                    std::string GetDeviceAddress() const;

                    /**
                     * 设置设备地址
                     * @param _deviceAddress 设备地址
                     * 
                     */
                    void SetDeviceAddress(const std::string& _deviceAddress);

                    /**
                     * 判断参数 DeviceAddress 是否已赋值
                     * @return DeviceAddress 是否已赋值
                     * 
                     */
                    bool DeviceAddressHasBeenSet() const;

                    /**
                     * 获取设备Id
                     * @return DeviceId 设备Id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param _deviceId 设备Id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取通道Id
                     * @return ChannelId 通道Id
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道Id
                     * @param _channelId 通道Id
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取事件日志
                     * @return EventLog 事件日志
                     * 
                     */
                    std::string GetEventLog() const;

                    /**
                     * 设置事件日志
                     * @param _eventLog 事件日志
                     * 
                     */
                    void SetEventLog(const std::string& _eventLog);

                    /**
                     * 判断参数 EventLog 是否已赋值
                     * @return EventLog 是否已赋值
                     * 
                     */
                    bool EventLogHasBeenSet() const;

                    /**
                     * 获取设备备注名称
                     * @return DeviceName 设备备注名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备备注名称
                     * @param _deviceName 设备备注名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                private:

                    /**
                     * 开始时间，秒级时间戳
                     */
                    int64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 事件类型 1:注册 2:心跳 4:录制异常 5:播放异常 6:流中断
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_eventDesc;
                    bool m_eventDescHasBeenSet;

                    /**
                     * 设备类型
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备地址
                     */
                    std::string m_deviceAddress;
                    bool m_deviceAddressHasBeenSet;

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道Id
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 事件日志
                     */
                    std::string m_eventLog;
                    bool m_eventLogHasBeenSet;

                    /**
                     * 设备备注名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_EVENTS_H_
