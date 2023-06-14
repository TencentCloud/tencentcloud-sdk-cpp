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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_VIDEOINFO_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_VIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 视频信息
                */
                class VideoInfo : public AbstractModel
                {
                public:
                    VideoInfo();
                    ~VideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频开始播放的时间（单位：毫秒）
                     * @return VideoPlayTime 视频开始播放的时间（单位：毫秒）
                     * 
                     */
                    int64_t GetVideoPlayTime() const;

                    /**
                     * 设置视频开始播放的时间（单位：毫秒）
                     * @param _videoPlayTime 视频开始播放的时间（单位：毫秒）
                     * 
                     */
                    void SetVideoPlayTime(const int64_t& _videoPlayTime);

                    /**
                     * 判断参数 VideoPlayTime 是否已赋值
                     * @return VideoPlayTime 是否已赋值
                     * 
                     */
                    bool VideoPlayTimeHasBeenSet() const;

                    /**
                     * 获取视频大小（字节）
                     * @return VideoSize 视频大小（字节）
                     * 
                     */
                    int64_t GetVideoSize() const;

                    /**
                     * 设置视频大小（字节）
                     * @param _videoSize 视频大小（字节）
                     * 
                     */
                    void SetVideoSize(const int64_t& _videoSize);

                    /**
                     * 判断参数 VideoSize 是否已赋值
                     * @return VideoSize 是否已赋值
                     * 
                     */
                    bool VideoSizeHasBeenSet() const;

                    /**
                     * 获取视频格式
                     * @return VideoFormat 视频格式
                     * 
                     */
                    std::string GetVideoFormat() const;

                    /**
                     * 设置视频格式
                     * @param _videoFormat 视频格式
                     * 
                     */
                    void SetVideoFormat(const std::string& _videoFormat);

                    /**
                     * 判断参数 VideoFormat 是否已赋值
                     * @return VideoFormat 是否已赋值
                     * 
                     */
                    bool VideoFormatHasBeenSet() const;

                    /**
                     * 获取视频播放时长（单位：毫秒）
                     * @return VideoDuration 视频播放时长（单位：毫秒）
                     * 
                     */
                    int64_t GetVideoDuration() const;

                    /**
                     * 设置视频播放时长（单位：毫秒）
                     * @param _videoDuration 视频播放时长（单位：毫秒）
                     * 
                     */
                    void SetVideoDuration(const int64_t& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     * 
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取视频文件URL
                     * @return VideoUrl 视频文件URL
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频文件URL
                     * @param _videoUrl 视频文件URL
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取视频文件Id
                     * @return VideoId 视频文件Id
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置视频文件Id
                     * @param _videoId 视频文件Id
                     * 
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                    /**
                     * 获取视频流类型 
- 0：摄像头视频 
- 1：屏幕分享视频
- 2：白板视频 
- 3：混流视频
- 4：纯音频（mp3)
                     * @return VideoType 视频流类型 
- 0：摄像头视频 
- 1：屏幕分享视频
- 2：白板视频 
- 3：混流视频
- 4：纯音频（mp3)
                     * 
                     */
                    int64_t GetVideoType() const;

                    /**
                     * 设置视频流类型 
- 0：摄像头视频 
- 1：屏幕分享视频
- 2：白板视频 
- 3：混流视频
- 4：纯音频（mp3)
                     * @param _videoType 视频流类型 
- 0：摄像头视频 
- 1：屏幕分享视频
- 2：白板视频 
- 3：混流视频
- 4：纯音频（mp3)
                     * 
                     */
                    void SetVideoType(const int64_t& _videoType);

                    /**
                     * 判断参数 VideoType 是否已赋值
                     * @return VideoType 是否已赋值
                     * 
                     */
                    bool VideoTypeHasBeenSet() const;

                    /**
                     * 获取摄像头/屏幕分享视频所属用户的 Id（白板视频为空、混流视频tic_mixstream_房间号_混流布局类型、辅路视频tic_substream_用户Id）
                     * @return UserId 摄像头/屏幕分享视频所属用户的 Id（白板视频为空、混流视频tic_mixstream_房间号_混流布局类型、辅路视频tic_substream_用户Id）
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置摄像头/屏幕分享视频所属用户的 Id（白板视频为空、混流视频tic_mixstream_房间号_混流布局类型、辅路视频tic_substream_用户Id）
                     * @param _userId 摄像头/屏幕分享视频所属用户的 Id（白板视频为空、混流视频tic_mixstream_房间号_混流布局类型、辅路视频tic_substream_用户Id）
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
                     * 获取视频分辨率的宽
                     * @return Width 视频分辨率的宽
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频分辨率的宽
                     * @param _width 视频分辨率的宽
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频分辨率的高
                     * @return Height 视频分辨率的高
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频分辨率的高
                     * @param _height 视频分辨率的高
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 视频开始播放的时间（单位：毫秒）
                     */
                    int64_t m_videoPlayTime;
                    bool m_videoPlayTimeHasBeenSet;

                    /**
                     * 视频大小（字节）
                     */
                    int64_t m_videoSize;
                    bool m_videoSizeHasBeenSet;

                    /**
                     * 视频格式
                     */
                    std::string m_videoFormat;
                    bool m_videoFormatHasBeenSet;

                    /**
                     * 视频播放时长（单位：毫秒）
                     */
                    int64_t m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * 视频文件URL
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频文件Id
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                    /**
                     * 视频流类型 
- 0：摄像头视频 
- 1：屏幕分享视频
- 2：白板视频 
- 3：混流视频
- 4：纯音频（mp3)
                     */
                    int64_t m_videoType;
                    bool m_videoTypeHasBeenSet;

                    /**
                     * 摄像头/屏幕分享视频所属用户的 Id（白板视频为空、混流视频tic_mixstream_房间号_混流布局类型、辅路视频tic_substream_用户Id）
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 视频分辨率的宽
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频分辨率的高
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_VIDEOINFO_H_
