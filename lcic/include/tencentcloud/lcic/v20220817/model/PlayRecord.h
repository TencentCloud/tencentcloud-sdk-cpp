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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_PLAYRECORD_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_PLAYRECORD_H_

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
                * 信令录制视频观看记录详情
                */
                class PlayRecord : public AbstractModel
                {
                public:
                    PlayRecord();
                    ~PlayRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>房间ID。</p>
                     * @return RoomId <p>房间ID。</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>房间ID。</p>
                     * @param _roomId <p>房间ID。</p>
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
                     * 获取<p>用户ID。</p>
                     * @return UserId <p>用户ID。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID。</p>
                     * @param _userId <p>用户ID。</p>
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
                     * 获取<p>单次播放会话ID。</p>
                     * @return SessionId <p>单次播放会话ID。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>单次播放会话ID。</p>
                     * @param _sessionId <p>单次播放会话ID。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>播放开始时间，unix时间戳（秒）。</p>
                     * @return PlayBeginTime <p>播放开始时间，unix时间戳（秒）。</p>
                     * 
                     */
                    uint64_t GetPlayBeginTime() const;

                    /**
                     * 设置<p>播放开始时间，unix时间戳（秒）。</p>
                     * @param _playBeginTime <p>播放开始时间，unix时间戳（秒）。</p>
                     * 
                     */
                    void SetPlayBeginTime(const uint64_t& _playBeginTime);

                    /**
                     * 判断参数 PlayBeginTime 是否已赋值
                     * @return PlayBeginTime 是否已赋值
                     * 
                     */
                    bool PlayBeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>播放结束时间，unix时间戳（秒）。</p>
                     * @return PlayEndTime <p>播放结束时间，unix时间戳（秒）。</p>
                     * 
                     */
                    uint64_t GetPlayEndTime() const;

                    /**
                     * 设置<p>播放结束时间，unix时间戳（秒）。</p>
                     * @param _playEndTime <p>播放结束时间，unix时间戳（秒）。</p>
                     * 
                     */
                    void SetPlayEndTime(const uint64_t& _playEndTime);

                    /**
                     * 判断参数 PlayEndTime 是否已赋值
                     * @return PlayEndTime 是否已赋值
                     * 
                     */
                    bool PlayEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>播放时长（毫秒）。</p>
                     * @return Duration <p>播放时长（毫秒）。</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>播放时长（毫秒）。</p>
                     * @param _duration <p>播放时长（毫秒）。</p>
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>房间ID。</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>用户ID。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>单次播放会话ID。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>播放开始时间，unix时间戳（秒）。</p>
                     */
                    uint64_t m_playBeginTime;
                    bool m_playBeginTimeHasBeenSet;

                    /**
                     * <p>播放结束时间，unix时间戳（秒）。</p>
                     */
                    uint64_t m_playEndTime;
                    bool m_playEndTimeHasBeenSet;

                    /**
                     * <p>播放时长（毫秒）。</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_PLAYRECORD_H_
