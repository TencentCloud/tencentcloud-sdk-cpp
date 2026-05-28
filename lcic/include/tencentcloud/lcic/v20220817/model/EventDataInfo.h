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
                     * 获取<p>事件发生的房间号。</p>
                     * @return RoomId <p>事件发生的房间号。</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>事件发生的房间号。</p>
                     * @param _roomId <p>事件发生的房间号。</p>
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
                     * 获取<p>事件发生的用户。</p>
                     * @return UserId <p>事件发生的用户。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>事件发生的用户。</p>
                     * @param _userId <p>事件发生的用户。</p>
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
                     * 获取<p>用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.</p>
                     * @return Device <p>用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.</p>
                     * 
                     */
                    uint64_t GetDevice() const;

                    /**
                     * 设置<p>用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.</p>
                     * @param _device <p>用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.</p>
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
                     * 获取<p>录制时长。单位：秒</p>
                     * @return Duration <p>录制时长。单位：秒</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>录制时长。单位：秒</p>
                     * @param _duration <p>录制时长。单位：秒</p>
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
                     * 获取<p>录制文件大小</p>
                     * @return RecordSize <p>录制文件大小</p>
                     * 
                     */
                    uint64_t GetRecordSize() const;

                    /**
                     * 设置<p>录制文件大小</p>
                     * @param _recordSize <p>录制文件大小</p>
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
                     * 获取<p>录制url</p>
                     * @return RecordUrl <p>录制url</p>
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置<p>录制url</p>
                     * @param _recordUrl <p>录制url</p>
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取<p>MemberQuit事件，对应Reason（0:主动退出 1:被踢 2:永久被踢 4:失去心跳下线 5:房间结束，成员自动退出）</p>
                     * @return Reason <p>MemberQuit事件，对应Reason（0:主动退出 1:被踢 2:永久被踢 4:失去心跳下线 5:房间结束，成员自动退出）</p>
                     * 
                     */
                    uint64_t GetReason() const;

                    /**
                     * 设置<p>MemberQuit事件，对应Reason（0:主动退出 1:被踢 2:永久被踢 4:失去心跳下线 5:房间结束，成员自动退出）</p>
                     * @param _reason <p>MemberQuit事件，对应Reason（0:主动退出 1:被踢 2:永久被踢 4:失去心跳下线 5:房间结束，成员自动退出）</p>
                     * 
                     */
                    void SetReason(const uint64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>角色</p><p>枚举值：</p><ul><li>0： 学生</li><li>1： 老师</li><li>2： 助教</li><li>3： 巡课/督导</li></ul>
                     * @return Role <p>角色</p><p>枚举值：</p><ul><li>0： 学生</li><li>1： 老师</li><li>2： 助教</li><li>3： 巡课/督导</li></ul>
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置<p>角色</p><p>枚举值：</p><ul><li>0： 学生</li><li>1： 老师</li><li>2： 助教</li><li>3： 巡课/督导</li></ul>
                     * @param _role <p>角色</p><p>枚举值：</p><ul><li>0： 学生</li><li>1： 老师</li><li>2： 助教</li><li>3： 巡课/督导</li></ul>
                     * 
                     */
                    void SetRole(const uint64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * <p>事件发生的房间号。</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>事件发生的用户。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>用户设备类型。0: Unknown; 1: Windows; 2: macOS; 3: Android; 4: iOS; 5: Web; 6: Mobile webpage; 7: Weixin Mini Program.</p>
                     */
                    uint64_t m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>录制时长。单位：秒</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>录制文件大小</p>
                     */
                    uint64_t m_recordSize;
                    bool m_recordSizeHasBeenSet;

                    /**
                     * <p>录制url</p>
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * <p>MemberQuit事件，对应Reason（0:主动退出 1:被踢 2:永久被踢 4:失去心跳下线 5:房间结束，成员自动退出）</p>
                     */
                    uint64_t m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>角色</p><p>枚举值：</p><ul><li>0： 学生</li><li>1： 老师</li><li>2： 助教</li><li>3： 巡课/督导</li></ul>
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_EVENTDATAINFO_H_
