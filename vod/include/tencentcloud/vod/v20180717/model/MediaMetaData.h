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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMETADATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaVideoStreamItem.h>
#include <tencentcloud/vod/v20180717/model/MediaAudioStreamItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播媒体文件元信息
                */
                class MediaMetaData : public AbstractModel
                {
                public:
                    MediaMetaData();
                    ~MediaMetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * @return Size 上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * @param _size 上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取容器类型，例如 m4a，mp4 等。
                     * @return Container 容器类型，例如 m4a，mp4 等。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置容器类型，例如 m4a，mp4 等。
                     * @param _container 容器类型，例如 m4a，mp4 等。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取视频流码率平均值与音频流码率平均值之和，单位：bps。
                     * @return Bitrate 视频流码率平均值与音频流码率平均值之和，单位：bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流码率平均值与音频流码率平均值之和，单位：bps。
                     * @param _bitrate 视频流码率平均值与音频流码率平均值之和，单位：bps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取视频流高度的最大值，单位：px。
                     * @return Height 视频流高度的最大值，单位：px。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频流高度的最大值，单位：px。
                     * @param _height 视频流高度的最大值，单位：px。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频流宽度的最大值，单位：px。
                     * @return Width 视频流宽度的最大值，单位：px。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频流宽度的最大值，单位：px。
                     * @param _width 视频流宽度的最大值，单位：px。
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
                     * 获取视频时长，单位：秒。
                     * @return Duration 视频时长，单位：秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置视频时长，单位：秒。
                     * @param _duration 视频时长，单位：秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取视频拍摄时的选择角度，单位：度。
                     * @return Rotate 视频拍摄时的选择角度，单位：度。
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置视频拍摄时的选择角度，单位：度。
                     * @param _rotate 视频拍摄时的选择角度，单位：度。
                     * 
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     * 
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取视频流信息。
                     * @return VideoStreamSet 视频流信息。
                     * 
                     */
                    std::vector<MediaVideoStreamItem> GetVideoStreamSet() const;

                    /**
                     * 设置视频流信息。
                     * @param _videoStreamSet 视频流信息。
                     * 
                     */
                    void SetVideoStreamSet(const std::vector<MediaVideoStreamItem>& _videoStreamSet);

                    /**
                     * 判断参数 VideoStreamSet 是否已赋值
                     * @return VideoStreamSet 是否已赋值
                     * 
                     */
                    bool VideoStreamSetHasBeenSet() const;

                    /**
                     * 获取音频流信息。
                     * @return AudioStreamSet 音频流信息。
                     * 
                     */
                    std::vector<MediaAudioStreamItem> GetAudioStreamSet() const;

                    /**
                     * 设置音频流信息。
                     * @param _audioStreamSet 音频流信息。
                     * 
                     */
                    void SetAudioStreamSet(const std::vector<MediaAudioStreamItem>& _audioStreamSet);

                    /**
                     * 判断参数 AudioStreamSet 是否已赋值
                     * @return AudioStreamSet 是否已赋值
                     * 
                     */
                    bool AudioStreamSetHasBeenSet() const;

                    /**
                     * 获取视频时长，单位：秒。
                     * @return VideoDuration 视频时长，单位：秒。
                     * 
                     */
                    double GetVideoDuration() const;

                    /**
                     * 设置视频时长，单位：秒。
                     * @param _videoDuration 视频时长，单位：秒。
                     * 
                     */
                    void SetVideoDuration(const double& _videoDuration);

                    /**
                     * 判断参数 VideoDuration 是否已赋值
                     * @return VideoDuration 是否已赋值
                     * 
                     */
                    bool VideoDurationHasBeenSet() const;

                    /**
                     * 获取音频时长，单位：秒。
                     * @return AudioDuration 音频时长，单位：秒。
                     * 
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置音频时长，单位：秒。
                     * @param _audioDuration 音频时长，单位：秒。
                     * 
                     */
                    void SetAudioDuration(const double& _audioDuration);

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     * 
                     */
                    bool AudioDurationHasBeenSet() const;

                    /**
                     * 获取媒体文件的 Md5 值。
<li><font color=red>注意</font>：如需要获取媒体文件的 Md5，调用 DescribeFileAttributes 接口，待任务执行完成后获取。</li>
                     * @return Md5 媒体文件的 Md5 值。
<li><font color=red>注意</font>：如需要获取媒体文件的 Md5，调用 DescribeFileAttributes 接口，待任务执行完成后获取。</li>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置媒体文件的 Md5 值。
<li><font color=red>注意</font>：如需要获取媒体文件的 Md5，调用 DescribeFileAttributes 接口，待任务执行完成后获取。</li>
                     * @param _md5 媒体文件的 Md5 值。
<li><font color=red>注意</font>：如需要获取媒体文件的 Md5，调用 DescribeFileAttributes 接口，待任务执行完成后获取。</li>
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * 上传的媒体文件大小（视频为 HLS 时，大小是 m3u8 和 ts 文件大小的总和），单位：字节。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 容器类型，例如 m4a，mp4 等。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 视频流码率平均值与音频流码率平均值之和，单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流高度的最大值，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流宽度的最大值，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频时长，单位：秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 视频拍摄时的选择角度，单位：度。
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * 视频流信息。
                     */
                    std::vector<MediaVideoStreamItem> m_videoStreamSet;
                    bool m_videoStreamSetHasBeenSet;

                    /**
                     * 音频流信息。
                     */
                    std::vector<MediaAudioStreamItem> m_audioStreamSet;
                    bool m_audioStreamSetHasBeenSet;

                    /**
                     * 视频时长，单位：秒。
                     */
                    double m_videoDuration;
                    bool m_videoDurationHasBeenSet;

                    /**
                     * 音频时长，单位：秒。
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                    /**
                     * 媒体文件的 Md5 值。
<li><font color=red>注意</font>：如需要获取媒体文件的 Md5，调用 DescribeFileAttributes 接口，待任务执行完成后获取。</li>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMETADATA_H_
