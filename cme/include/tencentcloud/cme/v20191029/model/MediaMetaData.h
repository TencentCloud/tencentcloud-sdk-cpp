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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIAMETADATA_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIAMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VideoStreamInfo.h>
#include <tencentcloud/cme/v20191029/model/AudioStreamInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 文件元信息。
                */
                class MediaMetaData : public AbstractModel
                {
                public:
                    MediaMetaData();
                    ~MediaMetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取大小。
                     * @return Size 大小。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置大小。
                     * @param _size 大小。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取容器类型。
                     * @return Container 容器类型。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置容器类型。
                     * @param _container 容器类型。
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
                    uint64_t GetBitrate() const;

                    /**
                     * 设置视频流码率平均值与音频流码率平均值之和，单位：bps。
                     * @param _bitrate 视频流码率平均值与音频流码率平均值之和，单位：bps。
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

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
                    uint64_t GetHeight() const;

                    /**
                     * 设置视频流高度的最大值，单位：px。
                     * @param _height 视频流高度的最大值，单位：px。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

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
                    uint64_t GetWidth() const;

                    /**
                     * 设置视频流宽度的最大值，单位：px。
                     * @param _width 视频流宽度的最大值，单位：px。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取时长，单位：秒。
                     * @return Duration 时长，单位：秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置时长，单位：秒。
                     * @param _duration 时长，单位：秒。
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
                     * 获取视频拍摄时的选择角度，单位：度
                     * @return Rotate 视频拍摄时的选择角度，单位：度
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置视频拍摄时的选择角度，单位：度
                     * @param _rotate 视频拍摄时的选择角度，单位：度
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
                     * @return VideoStreamInfoSet 视频流信息。
                     * 
                     */
                    std::vector<VideoStreamInfo> GetVideoStreamInfoSet() const;

                    /**
                     * 设置视频流信息。
                     * @param _videoStreamInfoSet 视频流信息。
                     * 
                     */
                    void SetVideoStreamInfoSet(const std::vector<VideoStreamInfo>& _videoStreamInfoSet);

                    /**
                     * 判断参数 VideoStreamInfoSet 是否已赋值
                     * @return VideoStreamInfoSet 是否已赋值
                     * 
                     */
                    bool VideoStreamInfoSetHasBeenSet() const;

                    /**
                     * 获取音频流信息。
                     * @return AudioStreamInfoSet 音频流信息。
                     * 
                     */
                    std::vector<AudioStreamInfo> GetAudioStreamInfoSet() const;

                    /**
                     * 设置音频流信息。
                     * @param _audioStreamInfoSet 音频流信息。
                     * 
                     */
                    void SetAudioStreamInfoSet(const std::vector<AudioStreamInfo>& _audioStreamInfoSet);

                    /**
                     * 判断参数 AudioStreamInfoSet 是否已赋值
                     * @return AudioStreamInfoSet 是否已赋值
                     * 
                     */
                    bool AudioStreamInfoSetHasBeenSet() const;

                private:

                    /**
                     * 大小。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 容器类型。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 视频流码率平均值与音频流码率平均值之和，单位：bps。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流高度的最大值，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流宽度的最大值，单位：px。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 时长，单位：秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 视频拍摄时的选择角度，单位：度
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * 视频流信息。
                     */
                    std::vector<VideoStreamInfo> m_videoStreamInfoSet;
                    bool m_videoStreamInfoSetHasBeenSet;

                    /**
                     * 音频流信息。
                     */
                    std::vector<AudioStreamInfo> m_audioStreamInfoSet;
                    bool m_audioStreamInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIAMETADATA_H_
