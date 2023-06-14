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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_VIDEOINFORESULTITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_VIDEOINFORESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务结束后生成的文件视频信息
                */
                class VideoInfoResultItem : public AbstractModel
                {
                public:
                    VideoInfoResultItem();
                    ~VideoInfoResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频流的流id。
                     * @return Stream 视频流的流id。
                     * 
                     */
                    int64_t GetStream() const;

                    /**
                     * 设置视频流的流id。
                     * @param _stream 视频流的流id。
                     * 
                     */
                    void SetStream(const int64_t& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取视频宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 视频宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 视频宽度。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 视频高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频高度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 视频高度。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bitrate 视频码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitrate 视频码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频帧率，用分数格式表示，如：25/1, 99/32等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fps 视频帧率，用分数格式表示，如：25/1, 99/32等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFps() const;

                    /**
                     * 设置视频帧率，用分数格式表示，如：25/1, 99/32等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fps 视频帧率，用分数格式表示，如：25/1, 99/32等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFps(const std::string& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取编码格式，如h264,h265等等 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Codec 编码格式，如h264,h265等等 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置编码格式，如h264,h265等等 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codec 编码格式，如h264,h265等等 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取播放旋转角度，可选值0-360。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rotate 播放旋转角度，可选值0-360。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置播放旋转角度，可选值0-360。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotate 播放旋转角度，可选值0-360。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频时长，单位：ms 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 视频时长，单位：ms 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置视频时长，单位：ms 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 视频时长，单位：ms 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取颜色空间，如yuv420p，yuv444p等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PixFormat 颜色空间，如yuv420p，yuv444p等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPixFormat() const;

                    /**
                     * 设置颜色空间，如yuv420p，yuv444p等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pixFormat 颜色空间，如yuv420p，yuv444p等等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPixFormat(const std::string& _pixFormat);

                    /**
                     * 判断参数 PixFormat 是否已赋值
                     * @return PixFormat 是否已赋值
                     * 
                     */
                    bool PixFormatHasBeenSet() const;

                private:

                    /**
                     * 视频流的流id。
                     */
                    int64_t m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 视频宽度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频高度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频帧率，用分数格式表示，如：25/1, 99/32等等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 编码格式，如h264,h265等等 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 播放旋转角度，可选值0-360。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * 视频时长，单位：ms 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 颜色空间，如yuv420p，yuv444p等等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pixFormat;
                    bool m_pixFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_VIDEOINFORESULTITEM_H_
