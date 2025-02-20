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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 房间事件对应的信息。
                */
                class EventDataInfo : public AbstractModel
                {
                public:
                    EventDataInfo();
                    ~EventDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件发生的房间号。
                     * @return RoomId 事件发生的房间号。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置事件发生的房间号。
                     * @param _roomId 事件发生的房间号。
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取事件发生的用户。
                     * @return UserId 事件发生的用户。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置事件发生的用户。
                     * @param _userId 事件发生的用户。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.
                     * @return Device 用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.
                     * 
                     */
                    uint64_t GetDevice() const;

                    /**
                     * 设置用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.
                     * @param _device 用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.
                     * 
                     */
                    void SetDevice(const uint64_t& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取录制时长。单位：秒
                     * @return Duration 录制时长。单位：秒
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置录制时长。单位：秒
                     * @param _duration 录制时长。单位：秒
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取录制文件大小
                     * @return RecordSize 录制文件大小
                     * 
                     */
                    uint64_t GetRecordSize() const;

                    /**
                     * 设置录制文件大小
                     * @param _recordSize 录制文件大小
                     * 
                     */
                    void SetRecordSize(const uint64_t& _recordSize);

                    /**
                     * 判断参数 RecordSize 是否已赋值
                     * @return RecordSize 是否已赋值
                     * 
                     */
                    bool RecordSizeHasBeenSet() const;

                    /**
                     * 获取录制url
                     * @return RecordUrl 录制url
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置录制url
                     * @param _recordUrl 录制url
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                private:

                    /**
                     * 事件发生的房间号。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 事件发生的用户。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.
                     */
                    uint64_t m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 录制时长。单位：秒
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 录制文件大小
                     */
                    uint64_t m_recordSize;
                    bool m_recordSizeHasBeenSet;

                    /**
                     * 录制url
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_
