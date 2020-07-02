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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ENCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ENCODEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MCU混流输出流编码参数
                */
                class EncodeParams : public AbstractModel
                {
                public:
                    EncodeParams();
                    ~EncodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取混流-输出流音频采样率。取值为[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
                     * @return AudioSampleRate 混流-输出流音频采样率。取值为[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
                     */
                    uint64_t GetAudioSampleRate() const;

                    /**
                     * 设置混流-输出流音频采样率。取值为[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
                     * @param AudioSampleRate 混流-输出流音频采样率。取值为[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
                     */
                    void SetAudioSampleRate(const uint64_t& _audioSampleRate);

                    /**
                     * 判断参数 AudioSampleRate 是否已赋值
                     * @return AudioSampleRate 是否已赋值
                     */
                    bool AudioSampleRateHasBeenSet() const;

                    /**
                     * 获取混流-输出流音频码率。取值范围[8,500]，单位为Kbps。
                     * @return AudioBitrate 混流-输出流音频码率。取值范围[8,500]，单位为Kbps。
                     */
                    uint64_t GetAudioBitrate() const;

                    /**
                     * 设置混流-输出流音频码率。取值范围[8,500]，单位为Kbps。
                     * @param AudioBitrate 混流-输出流音频码率。取值范围[8,500]，单位为Kbps。
                     */
                    void SetAudioBitrate(const uint64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取混流-输出流音频声道数，取值范围[1,2]。
                     * @return AudioChannels 混流-输出流音频声道数，取值范围[1,2]。
                     */
                    uint64_t GetAudioChannels() const;

                    /**
                     * 设置混流-输出流音频声道数，取值范围[1,2]。
                     * @param AudioChannels 混流-输出流音频声道数，取值范围[1,2]。
                     */
                    void SetAudioChannels(const uint64_t& _audioChannels);

                    /**
                     * 判断参数 AudioChannels 是否已赋值
                     * @return AudioChannels 是否已赋值
                     */
                    bool AudioChannelsHasBeenSet() const;

                    /**
                     * 获取混流-输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     * @return VideoWidth 混流-输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     */
                    uint64_t GetVideoWidth() const;

                    /**
                     * 设置混流-输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     * @param VideoWidth 混流-输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     */
                    void SetVideoWidth(const uint64_t& _videoWidth);

                    /**
                     * 判断参数 VideoWidth 是否已赋值
                     * @return VideoWidth 是否已赋值
                     */
                    bool VideoWidthHasBeenSet() const;

                    /**
                     * 获取混流-输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     * @return VideoHeight 混流-输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     */
                    uint64_t GetVideoHeight() const;

                    /**
                     * 设置混流-输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     * @param VideoHeight 混流-输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     */
                    void SetVideoHeight(const uint64_t& _videoHeight);

                    /**
                     * 判断参数 VideoHeight 是否已赋值
                     * @return VideoHeight 是否已赋值
                     */
                    bool VideoHeightHasBeenSet() const;

                    /**
                     * 获取混流-输出流码率，音视频输出时必填。取值范围[1,10000]，单位为Kbps。
                     * @return VideoBitrate 混流-输出流码率，音视频输出时必填。取值范围[1,10000]，单位为Kbps。
                     */
                    uint64_t GetVideoBitrate() const;

                    /**
                     * 设置混流-输出流码率，音视频输出时必填。取值范围[1,10000]，单位为Kbps。
                     * @param VideoBitrate 混流-输出流码率，音视频输出时必填。取值范围[1,10000]，单位为Kbps。
                     */
                    void SetVideoBitrate(const uint64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取混流-输出流帧率，音视频输出时必填。取值为[6,12,15,24,30,48,60]，不在上述帧率值内系统会自动调整。
                     * @return VideoFramerate 混流-输出流帧率，音视频输出时必填。取值为[6,12,15,24,30,48,60]，不在上述帧率值内系统会自动调整。
                     */
                    uint64_t GetVideoFramerate() const;

                    /**
                     * 设置混流-输出流帧率，音视频输出时必填。取值为[6,12,15,24,30,48,60]，不在上述帧率值内系统会自动调整。
                     * @param VideoFramerate 混流-输出流帧率，音视频输出时必填。取值为[6,12,15,24,30,48,60]，不在上述帧率值内系统会自动调整。
                     */
                    void SetVideoFramerate(const uint64_t& _videoFramerate);

                    /**
                     * 判断参数 VideoFramerate 是否已赋值
                     * @return VideoFramerate 是否已赋值
                     */
                    bool VideoFramerateHasBeenSet() const;

                    /**
                     * 获取混流-输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     * @return VideoGop 混流-输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     */
                    uint64_t GetVideoGop() const;

                    /**
                     * 设置混流-输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     * @param VideoGop 混流-输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     */
                    void SetVideoGop(const uint64_t& _videoGop);

                    /**
                     * 判断参数 VideoGop 是否已赋值
                     * @return VideoGop 是否已赋值
                     */
                    bool VideoGopHasBeenSet() const;

                    /**
                     * 获取混流-输出流背景色。
                     * @return BackgroundColor 混流-输出流背景色。
                     */
                    uint64_t GetBackgroundColor() const;

                    /**
                     * 设置混流-输出流背景色。
                     * @param BackgroundColor 混流-输出流背景色。
                     */
                    void SetBackgroundColor(const uint64_t& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取混流-输出流背景图片，取值为实时音视频控制台上传的图片ID。
                     * @return BackgroundImageId 混流-输出流背景图片，取值为实时音视频控制台上传的图片ID。
                     */
                    uint64_t GetBackgroundImageId() const;

                    /**
                     * 设置混流-输出流背景图片，取值为实时音视频控制台上传的图片ID。
                     * @param BackgroundImageId 混流-输出流背景图片，取值为实时音视频控制台上传的图片ID。
                     */
                    void SetBackgroundImageId(const uint64_t& _backgroundImageId);

                    /**
                     * 判断参数 BackgroundImageId 是否已赋值
                     * @return BackgroundImageId 是否已赋值
                     */
                    bool BackgroundImageIdHasBeenSet() const;

                private:

                    /**
                     * 混流-输出流音频采样率。取值为[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
                     */
                    uint64_t m_audioSampleRate;
                    bool m_audioSampleRateHasBeenSet;

                    /**
                     * 混流-输出流音频码率。取值范围[8,500]，单位为Kbps。
                     */
                    uint64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * 混流-输出流音频声道数，取值范围[1,2]。
                     */
                    uint64_t m_audioChannels;
                    bool m_audioChannelsHasBeenSet;

                    /**
                     * 混流-输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     */
                    uint64_t m_videoWidth;
                    bool m_videoWidthHasBeenSet;

                    /**
                     * 混流-输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     */
                    uint64_t m_videoHeight;
                    bool m_videoHeightHasBeenSet;

                    /**
                     * 混流-输出流码率，音视频输出时必填。取值范围[1,10000]，单位为Kbps。
                     */
                    uint64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * 混流-输出流帧率，音视频输出时必填。取值为[6,12,15,24,30,48,60]，不在上述帧率值内系统会自动调整。
                     */
                    uint64_t m_videoFramerate;
                    bool m_videoFramerateHasBeenSet;

                    /**
                     * 混流-输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     */
                    uint64_t m_videoGop;
                    bool m_videoGopHasBeenSet;

                    /**
                     * 混流-输出流背景色。
                     */
                    uint64_t m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * 混流-输出流背景图片，取值为实时音视频控制台上传的图片ID。
                     */
                    uint64_t m_backgroundImageId;
                    bool m_backgroundImageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ENCODEPARAMS_H_
