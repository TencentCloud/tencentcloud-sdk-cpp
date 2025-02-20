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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/EventDataInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 房间事件信息。
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件发生的秒级unix时间戳。
                     * @return Timestamp 事件发生的秒级unix时间戳。
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置事件发生的秒级unix时间戳。
                     * @param _timestamp 事件发生的秒级unix时间戳。
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取事件类型,有以下值:
RoomStart:房间开始 RoomEnd:房间结束 MemberJoin:成员加入 MemberQuit:成员退出 RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * @return EventType 事件类型,有以下值:
RoomStart:房间开始 RoomEnd:房间结束 MemberJoin:成员加入 MemberQuit:成员退出 RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型,有以下值:
RoomStart:房间开始 RoomEnd:房间结束 MemberJoin:成员加入 MemberQuit:成员退出 RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * @param _eventType 事件类型,有以下值:
RoomStart:房间开始 RoomEnd:房间结束 MemberJoin:成员加入 MemberQuit:成员退出 RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件详细内容，包含房间号,成员类型事件包含用户Id。
                     * @return EventData 事件详细内容，包含房间号,成员类型事件包含用户Id。
                     * 
                     */
                    EventDataInfo GetEventData() const;

                    /**
                     * 设置事件详细内容，包含房间号,成员类型事件包含用户Id。
                     * @param _eventData 事件详细内容，包含房间号,成员类型事件包含用户Id。
                     * 
                     */
                    void SetEventData(const EventDataInfo& _eventData);

                    /**
                     * 判断参数 EventData 是否已赋值
                     * @return EventData 是否已赋值
                     * 
                     */
                    bool EventDataHasBeenSet() const;

                private:

                    /**
                     * 事件发生的秒级unix时间戳。
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 事件类型,有以下值:
RoomStart:房间开始 RoomEnd:房间结束 MemberJoin:成员加入 MemberQuit:成员退出 RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件详细内容，包含房间号,成员类型事件包含用户Id。
                     */
                    EventDataInfo m_eventData;
                    bool m_eventDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTINFO_H_
