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
                     * 获取<p>大小。</p>
                     * @return Size <p>大小。</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>大小。</p>
                     * @param _size <p>大小。</p>
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
                     * 获取<p>容器类型。</p>
                     * @return Container <p>容器类型。</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>容器类型。</p>
                     * @param _container <p>容器类型。</p>
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
                     * 获取<p>视频流码率平均值与音频流码率平均值之和，单位：bps。</p>
                     * @return Bitrate <p>视频流码率平均值与音频流码率平均值之和，单位：bps。</p>
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置<p>视频流码率平均值与音频流码率平均值之和，单位：bps。</p>
                     * @param _bitrate <p>视频流码率平均值与音频流码率平均值之和，单位：bps。</p>
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
                     * 获取<p>视频流高度的最大值，单位：px。</p>
                     * @return Height <p>视频流高度的最大值，单位：px。</p>
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>视频流高度的最大值，单位：px。</p>
                     * @param _height <p>视频流高度的最大值，单位：px。</p>
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
                     * 获取<p>视频流宽度的最大值，单位：px。</p>
                     * @return Width <p>视频流宽度的最大值，单位：px。</p>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>视频流宽度的最大值，单位：px。</p>
                     * @param _width <p>视频流宽度的最大值，单位：px。</p>
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
                     * 获取<p>时长，单位：秒。</p>
                     * @return Duration <p>时长，单位：秒。</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>时长，单位：秒。</p>
                     * @param _duration <p>时长，单位：秒。</p>
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
                     * 获取<p>视频拍摄时的选择角度，单位：度</p>
                     * @return Rotate <p>视频拍摄时的选择角度，单位：度</p>
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置<p>视频拍摄时的选择角度，单位：度</p>
                     * @param _rotate <p>视频拍摄时的选择角度，单位：度</p>
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
                     * 获取<p>视频流信息。</p>
                     * @return VideoStreamInfoSet <p>视频流信息。</p>
                     * 
                     */
                    std::vector<VideoStreamInfo> GetVideoStreamInfoSet() const;

                    /**
                     * 设置<p>视频流信息。</p>
                     * @param _videoStreamInfoSet <p>视频流信息。</p>
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
                     * 获取<p>音频流信息。</p>
                     * @return AudioStreamInfoSet <p>音频流信息。</p>
                     * 
                     */
                    std::vector<AudioStreamInfo> GetAudioStreamInfoSet() const;

                    /**
                     * 设置<p>音频流信息。</p>
                     * @param _audioStreamInfoSet <p>音频流信息。</p>
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
                     * <p>大小。</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>容器类型。</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>视频流码率平均值与音频流码率平均值之和，单位：bps。</p>
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>视频流高度的最大值，单位：px。</p>
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>视频流宽度的最大值，单位：px。</p>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>时长，单位：秒。</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>视频拍摄时的选择角度，单位：度</p>
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * <p>视频流信息。</p>
                     */
                    std::vector<VideoStreamInfo> m_videoStreamInfoSet;
                    bool m_videoStreamInfoSetHasBeenSet;

                    /**
                     * <p>音频流信息。</p>
                     */
                    std::vector<AudioStreamInfo> m_audioStreamInfoSet;
                    bool m_audioStreamInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIAMETADATA_H_
