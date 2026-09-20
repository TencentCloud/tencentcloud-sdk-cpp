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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VODCLOUDSTORAGEEVENT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VODCLOUDSTORAGEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/VideoList.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 加密云存事件数据
                */
                class VodCloudStorageEvent : public AbstractModel
                {
                public:
                    VodCloudStorageEvent();
                    ~VodCloudStorageEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件id</p>
                     * @return EventId <p>事件id</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件id</p>
                     * @param _eventId <p>事件id</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>缩略图url</p>
                     * @return ThumbnailUrl <p>缩略图url</p>
                     * 
                     */
                    std::string GetThumbnailUrl() const;

                    /**
                     * 设置<p>缩略图url</p>
                     * @param _thumbnailUrl <p>缩略图url</p>
                     * 
                     */
                    void SetThumbnailUrl(const std::string& _thumbnailUrl);

                    /**
                     * 判断参数 ThumbnailUrl 是否已赋值
                     * @return ThumbnailUrl 是否已赋值
                     * 
                     */
                    bool ThumbnailUrlHasBeenSet() const;

                    /**
                     * 获取<p>事件开始时间</p>
                     * @return EventStartTime <p>事件开始时间</p>
                     * 
                     */
                    uint64_t GetEventStartTime() const;

                    /**
                     * 设置<p>事件开始时间</p>
                     * @param _eventStartTime <p>事件开始时间</p>
                     * 
                     */
                    void SetEventStartTime(const uint64_t& _eventStartTime);

                    /**
                     * 判断参数 EventStartTime 是否已赋值
                     * @return EventStartTime 是否已赋值
                     * 
                     */
                    bool EventStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>事件结束时间</p>
                     * @return EventEndTime <p>事件结束时间</p>
                     * 
                     */
                    uint64_t GetEventEndTime() const;

                    /**
                     * 设置<p>事件结束时间</p>
                     * @param _eventEndTime <p>事件结束时间</p>
                     * 
                     */
                    void SetEventEndTime(const uint64_t& _eventEndTime);

                    /**
                     * 判断参数 EventEndTime 是否已赋值
                     * @return EventEndTime 是否已赋值
                     * 
                     */
                    bool EventEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>视频相关信息</p>
                     * @return VideoList <p>视频相关信息</p>
                     * 
                     */
                    std::vector<VideoList> GetVideoList() const;

                    /**
                     * 设置<p>视频相关信息</p>
                     * @param _videoList <p>视频相关信息</p>
                     * 
                     */
                    void SetVideoList(const std::vector<VideoList>& _videoList);

                    /**
                     * 判断参数 VideoList 是否已赋值
                     * @return VideoList 是否已赋值
                     * 
                     */
                    bool VideoListHasBeenSet() const;

                    /**
                     * 获取<p>是否为图片事件</p><p>枚举值：</p><ul><li>true： 图片事件</li><li>false： 视频事件</li></ul>
                     * @return IsStaticEvent <p>是否为图片事件</p><p>枚举值：</p><ul><li>true： 图片事件</li><li>false： 视频事件</li></ul>
                     * 
                     */
                    bool GetIsStaticEvent() const;

                    /**
                     * 设置<p>是否为图片事件</p><p>枚举值：</p><ul><li>true： 图片事件</li><li>false： 视频事件</li></ul>
                     * @param _isStaticEvent <p>是否为图片事件</p><p>枚举值：</p><ul><li>true： 图片事件</li><li>false： 视频事件</li></ul>
                     * 
                     */
                    void SetIsStaticEvent(const bool& _isStaticEvent);

                    /**
                     * 判断参数 IsStaticEvent 是否已赋值
                     * @return IsStaticEvent 是否已赋值
                     * 
                     */
                    bool IsStaticEventHasBeenSet() const;

                private:

                    /**
                     * <p>事件id</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>缩略图url</p>
                     */
                    std::string m_thumbnailUrl;
                    bool m_thumbnailUrlHasBeenSet;

                    /**
                     * <p>事件开始时间</p>
                     */
                    uint64_t m_eventStartTime;
                    bool m_eventStartTimeHasBeenSet;

                    /**
                     * <p>事件结束时间</p>
                     */
                    uint64_t m_eventEndTime;
                    bool m_eventEndTimeHasBeenSet;

                    /**
                     * <p>视频相关信息</p>
                     */
                    std::vector<VideoList> m_videoList;
                    bool m_videoListHasBeenSet;

                    /**
                     * <p>是否为图片事件</p><p>枚举值：</p><ul><li>true： 图片事件</li><li>false： 视频事件</li></ul>
                     */
                    bool m_isStaticEvent;
                    bool m_isStaticEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VODCLOUDSTORAGEEVENT_H_
