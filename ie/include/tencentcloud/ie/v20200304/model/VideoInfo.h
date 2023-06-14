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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_VIDEOINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_VIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/PicMarkInfoItem.h>
#include <tencentcloud/ie/v20200304/model/DarInfo.h>
#include <tencentcloud/ie/v20200304/model/VideoEnhance.h>
#include <tencentcloud/ie/v20200304/model/HiddenMarkInfo.h>
#include <tencentcloud/ie/v20200304/model/TextMarkInfoItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 视频转码信息
                */
                class VideoInfo : public AbstractModel
                {
                public:
                    VideoInfo();
                    ~VideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频帧率，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * @return Fps 视频帧率，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置视频帧率，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * @param _fps 视频帧率，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取宽度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     * @return Width 宽度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     * @param _width 宽度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
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
                     * 获取高度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     * @return Height 高度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     * @param _height 高度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
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
                     * 获取长边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * @return LongSide 长边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * 
                     */
                    int64_t GetLongSide() const;

                    /**
                     * 设置长边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * @param _longSide 长边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * 
                     */
                    void SetLongSide(const int64_t& _longSide);

                    /**
                     * 判断参数 LongSide 是否已赋值
                     * @return LongSide 是否已赋值
                     * 
                     */
                    bool LongSideHasBeenSet() const;

                    /**
                     * 获取短边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * @return ShortSide 短边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * 
                     */
                    int64_t GetShortSide() const;

                    /**
                     * 设置短边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * @param _shortSide 短边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     * 
                     */
                    void SetShortSide(const int64_t& _shortSide);

                    /**
                     * 判断参数 ShortSide 是否已赋值
                     * @return ShortSide 是否已赋值
                     * 
                     */
                    bool ShortSideHasBeenSet() const;

                    /**
                     * 获取视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。当取值为 0，表示视频码率和原始视频保持一致。
                     * @return Bitrate 视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。当取值为 0，表示视频码率和原始视频保持一致。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。当取值为 0，表示视频码率和原始视频保持一致。
                     * @param _bitrate 视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。当取值为 0，表示视频码率和原始视频保持一致。
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
                     * 获取固定I帧之间，视频帧数量，取值范围： [25, 2500]，如果不填，使用编码默认最优序列。
                     * @return Gop 固定I帧之间，视频帧数量，取值范围： [25, 2500]，如果不填，使用编码默认最优序列。
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置固定I帧之间，视频帧数量，取值范围： [25, 2500]，如果不填，使用编码默认最优序列。
                     * @param _gop 固定I帧之间，视频帧数量，取值范围： [25, 2500]，如果不填，使用编码默认最优序列。
                     * 
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取编码器支持选项，可选值：
h264,
h265,
av1。
不填默认h264。
                     * @return VideoCodec 编码器支持选项，可选值：
h264,
h265,
av1。
不填默认h264。
                     * 
                     */
                    std::string GetVideoCodec() const;

                    /**
                     * 设置编码器支持选项，可选值：
h264,
h265,
av1。
不填默认h264。
                     * @param _videoCodec 编码器支持选项，可选值：
h264,
h265,
av1。
不填默认h264。
                     * 
                     */
                    void SetVideoCodec(const std::string& _videoCodec);

                    /**
                     * 判断参数 VideoCodec 是否已赋值
                     * @return VideoCodec 是否已赋值
                     * 
                     */
                    bool VideoCodecHasBeenSet() const;

                    /**
                     * 获取图片水印。
                     * @return PicMarkInfo 图片水印。
                     * 
                     */
                    std::vector<PicMarkInfoItem> GetPicMarkInfo() const;

                    /**
                     * 设置图片水印。
                     * @param _picMarkInfo 图片水印。
                     * 
                     */
                    void SetPicMarkInfo(const std::vector<PicMarkInfoItem>& _picMarkInfo);

                    /**
                     * 判断参数 PicMarkInfo 是否已赋值
                     * @return PicMarkInfo 是否已赋值
                     * 
                     */
                    bool PicMarkInfoHasBeenSet() const;

                    /**
                     * 获取填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。
                     * @return DarInfo 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。
                     * 
                     */
                    DarInfo GetDarInfo() const;

                    /**
                     * 设置填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。
                     * @param _darInfo 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。
                     * 
                     */
                    void SetDarInfo(const DarInfo& _darInfo);

                    /**
                     * 判断参数 DarInfo 是否已赋值
                     * @return DarInfo 是否已赋值
                     * 
                     */
                    bool DarInfoHasBeenSet() const;

                    /**
                     * 获取支持hdr,可选项：
hdr10,
hlg。
此时，VideoCodec会强制设置为h265, 编码位深为10
                     * @return Hdr 支持hdr,可选项：
hdr10,
hlg。
此时，VideoCodec会强制设置为h265, 编码位深为10
                     * 
                     */
                    std::string GetHdr() const;

                    /**
                     * 设置支持hdr,可选项：
hdr10,
hlg。
此时，VideoCodec会强制设置为h265, 编码位深为10
                     * @param _hdr 支持hdr,可选项：
hdr10,
hlg。
此时，VideoCodec会强制设置为h265, 编码位深为10
                     * 
                     */
                    void SetHdr(const std::string& _hdr);

                    /**
                     * 判断参数 Hdr 是否已赋值
                     * @return Hdr 是否已赋值
                     * 
                     */
                    bool HdrHasBeenSet() const;

                    /**
                     * 获取画质增强参数信息。
                     * @return VideoEnhance 画质增强参数信息。
                     * 
                     */
                    VideoEnhance GetVideoEnhance() const;

                    /**
                     * 设置画质增强参数信息。
                     * @param _videoEnhance 画质增强参数信息。
                     * 
                     */
                    void SetVideoEnhance(const VideoEnhance& _videoEnhance);

                    /**
                     * 判断参数 VideoEnhance 是否已赋值
                     * @return VideoEnhance 是否已赋值
                     * 
                     */
                    bool VideoEnhanceHasBeenSet() const;

                    /**
                     * 获取数字水印参数信息。
                     * @return HiddenMarkInfo 数字水印参数信息。
                     * 
                     */
                    HiddenMarkInfo GetHiddenMarkInfo() const;

                    /**
                     * 设置数字水印参数信息。
                     * @param _hiddenMarkInfo 数字水印参数信息。
                     * 
                     */
                    void SetHiddenMarkInfo(const HiddenMarkInfo& _hiddenMarkInfo);

                    /**
                     * 判断参数 HiddenMarkInfo 是否已赋值
                     * @return HiddenMarkInfo 是否已赋值
                     * 
                     */
                    bool HiddenMarkInfoHasBeenSet() const;

                    /**
                     * 获取文本水印参数信息。
                     * @return TextMarkInfo 文本水印参数信息。
                     * 
                     */
                    std::vector<TextMarkInfoItem> GetTextMarkInfo() const;

                    /**
                     * 设置文本水印参数信息。
                     * @param _textMarkInfo 文本水印参数信息。
                     * 
                     */
                    void SetTextMarkInfo(const std::vector<TextMarkInfoItem>& _textMarkInfo);

                    /**
                     * 判断参数 TextMarkInfo 是否已赋值
                     * @return TextMarkInfo 是否已赋值
                     * 
                     */
                    bool TextMarkInfoHasBeenSet() const;

                private:

                    /**
                     * 视频帧率，取值范围：[0, 60]，单位：Hz。
注意：当取值为 0，表示帧率和原始视频保持一致。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 宽度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高度，取值范围：0 和 [128, 4096]
注意：
当 Width、Height 均为 0，则分辨率同源；
当 Width 为 0，Height 非 0，则 Width 按比例缩放；
当 Width 非 0，Height 为 0，则 Height 按比例缩放；
当 Width、Height 均非 0，则分辨率按用户指定。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 长边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     */
                    int64_t m_longSide;
                    bool m_longSideHasBeenSet;

                    /**
                     * 短边分辨率，取值范围：0 和 [128, 4096]
注意：
当 LongSide、ShortSide 均为 0，则分辨率按照Width，Height；
当 LongSide 为 0，ShortSide 非 0，则 LongSide 按比例缩放；
当 LongSide非 0，ShortSide为 0，则 ShortSide 按比例缩放；
当 LongSide、ShortSide 均非 0，则分辨率按用户指定。
长短边优先级高于Weight,Height,设置长短边则忽略宽高。
                     */
                    int64_t m_shortSide;
                    bool m_shortSideHasBeenSet;

                    /**
                     * 视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。当取值为 0，表示视频码率和原始视频保持一致。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 固定I帧之间，视频帧数量，取值范围： [25, 2500]，如果不填，使用编码默认最优序列。
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 编码器支持选项，可选值：
h264,
h265,
av1。
不填默认h264。
                     */
                    std::string m_videoCodec;
                    bool m_videoCodecHasBeenSet;

                    /**
                     * 图片水印。
                     */
                    std::vector<PicMarkInfoItem> m_picMarkInfo;
                    bool m_picMarkInfoHasBeenSet;

                    /**
                     * 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。
                     */
                    DarInfo m_darInfo;
                    bool m_darInfoHasBeenSet;

                    /**
                     * 支持hdr,可选项：
hdr10,
hlg。
此时，VideoCodec会强制设置为h265, 编码位深为10
                     */
                    std::string m_hdr;
                    bool m_hdrHasBeenSet;

                    /**
                     * 画质增强参数信息。
                     */
                    VideoEnhance m_videoEnhance;
                    bool m_videoEnhanceHasBeenSet;

                    /**
                     * 数字水印参数信息。
                     */
                    HiddenMarkInfo m_hiddenMarkInfo;
                    bool m_hiddenMarkInfoHasBeenSet;

                    /**
                     * 文本水印参数信息。
                     */
                    std::vector<TextMarkInfoItem> m_textMarkInfo;
                    bool m_textMarkInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_VIDEOINFO_H_
