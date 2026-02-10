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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_PLAYBACKITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_PLAYBACKITEM_H_

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
                * 课堂回放信息
                */
                class PlaybackItem : public AbstractModel
                {
                public:
                    PlaybackItem();
                    ~PlaybackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>房间id</p>
                     * @return RoomId <p>房间id</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>房间id</p>
                     * @param _roomId <p>房间id</p>
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
                     * 获取<p>回放地址</p>
                     * @return PlaybackUrl <p>回放地址</p>
                     * 
                     */
                    std::string GetPlaybackUrl() const;

                    /**
                     * 设置<p>回放地址</p>
                     * @param _playbackUrl <p>回放地址</p>
                     * 
                     */
                    void SetPlaybackUrl(const std::string& _playbackUrl);

                    /**
                     * 判断参数 PlaybackUrl 是否已赋值
                     * @return PlaybackUrl 是否已赋值
                     * 
                     */
                    bool PlaybackUrlHasBeenSet() const;

                    /**
                     * 获取<p>录制时长</p>
                     * @return Duration <p>录制时长</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>录制时长</p>
                     * @param _duration <p>录制时长</p>
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
                     * 获取<p>录制开始时间</p>
                     * @return CreateTime <p>录制开始时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>录制开始时间</p>
                     * @param _createTime <p>录制开始时间</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>房间id</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>回放地址</p>
                     */
                    std::string m_playbackUrl;
                    bool m_playbackUrlHasBeenSet;

                    /**
                     * <p>录制时长</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>录制开始时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_PLAYBACKITEM_H_
