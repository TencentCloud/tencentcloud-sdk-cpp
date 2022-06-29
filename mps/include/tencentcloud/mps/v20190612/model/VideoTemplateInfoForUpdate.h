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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频流配置参数
                */
                class VideoTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    VideoTemplateInfoForUpdate();
                    ~VideoTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频流的编码格式，可选值：
<li>libx264：H.264 编码</li>
<li>libx265：H.265 编码</li>
<li>av1：AOMedia Video 1 编码</li>
目前 H.265 编码必须指定分辨率，并且需要在 640*480 以内。av1 编码容器目前只支持 mp4 。
                     * @return Codec 视频流的编码格式，可选值：
<li>libx264：H.264 编码</li>
<li>libx265：H.265 编码</li>
<li>av1：AOMedia Video 1 编码</li>
目前 H.265 编码必须指定分辨率，并且需要在 640*480 以内。av1 编码容器目前只支持 mp4 。
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置视频流的编码格式，可选值：
<li>libx264：H.264 编码</li>
<li>libx265：H.265 编码</li>
<li>av1：AOMedia Video 1 编码</li>
目前 H.265 编码必须指定分辨率，并且需要在 640*480 以内。av1 编码容器目前只支持 mp4 。
                     * @param Codec 视频流的编码格式，可选值：
<li>libx264：H.264 编码</li>
<li>libx265：H.265 编码</li>
<li>av1：AOMedia Video 1 编码</li>
目前 H.265 编码必须指定分辨率，并且需要在 640*480 以内。av1 编码容器目前只支持 mp4 。
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     * @return Fps 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     * @param Fps 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。
当取值为 0，表示视频码率和原始视频保持一致。
                     * @return Bitrate 视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。
当取值为 0，表示视频码率和原始视频保持一致。
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。
当取值为 0，表示视频码率和原始视频保持一致。
                     * @param Bitrate 视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。
当取值为 0，表示视频码率和原始视频保持一致。
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * @return ResolutionAdaptive 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * @param ResolutionAdaptive 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * @return Width 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * @param Width 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
                     * @return Height 视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
                     * @param Height 视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。当填 0 时，系统将自动设置 gop 长度。
                     * @return Gop 关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。当填 0 时，系统将自动设置 gop 长度。
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。当填 0 时，系统将自动设置 gop 长度。
                     * @param Gop 关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。当填 0 时，系统将自动设置 gop 长度。
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * @return FillType 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * @param FillType 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取视频恒定码率控制因子。取值范围为[0, 51]，填0表示禁用该参数。
如果没有特殊需求，不建议指定该参数。
                     * @return Vcrf 视频恒定码率控制因子。取值范围为[0, 51]，填0表示禁用该参数。
如果没有特殊需求，不建议指定该参数。
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置视频恒定码率控制因子。取值范围为[0, 51]，填0表示禁用该参数。
如果没有特殊需求，不建议指定该参数。
                     * @param Vcrf 视频恒定码率控制因子。取值范围为[0, 51]，填0表示禁用该参数。
如果没有特殊需求，不建议指定该参数。
                     */
                    void SetVcrf(const uint64_t& _vcrf);

                    /**
                     * 判断参数 Vcrf 是否已赋值
                     * @return Vcrf 是否已赋值
                     */
                    bool VcrfHasBeenSet() const;

                    /**
                     * 获取内容自适应编码。可选值：
<li>0：不开启</li>
<li>1：开启</li>
默认值: 0.   当开启该参数时，将会自适应生成多个不同分辨率，不同码率的码流， 其中VideoTemplate的宽和高为多个码流中的最大分辨率，VideoTemplate中的码率为多个码流中的最高码率， VideoTemplate中的vcrf为多个码流中的最高质量。 当不设置分辨率、码率和vcrf时， ContentAdaptStream 参数生成的最高分辨率为视频源的分辨率，视频质量为接近vmaf95分。 若要开启该参数或了解计费细节, 请联系您的腾讯云商务。
                     * @return ContentAdaptStream 内容自适应编码。可选值：
<li>0：不开启</li>
<li>1：开启</li>
默认值: 0.   当开启该参数时，将会自适应生成多个不同分辨率，不同码率的码流， 其中VideoTemplate的宽和高为多个码流中的最大分辨率，VideoTemplate中的码率为多个码流中的最高码率， VideoTemplate中的vcrf为多个码流中的最高质量。 当不设置分辨率、码率和vcrf时， ContentAdaptStream 参数生成的最高分辨率为视频源的分辨率，视频质量为接近vmaf95分。 若要开启该参数或了解计费细节, 请联系您的腾讯云商务。
                     */
                    uint64_t GetContentAdaptStream() const;

                    /**
                     * 设置内容自适应编码。可选值：
<li>0：不开启</li>
<li>1：开启</li>
默认值: 0.   当开启该参数时，将会自适应生成多个不同分辨率，不同码率的码流， 其中VideoTemplate的宽和高为多个码流中的最大分辨率，VideoTemplate中的码率为多个码流中的最高码率， VideoTemplate中的vcrf为多个码流中的最高质量。 当不设置分辨率、码率和vcrf时， ContentAdaptStream 参数生成的最高分辨率为视频源的分辨率，视频质量为接近vmaf95分。 若要开启该参数或了解计费细节, 请联系您的腾讯云商务。
                     * @param ContentAdaptStream 内容自适应编码。可选值：
<li>0：不开启</li>
<li>1：开启</li>
默认值: 0.   当开启该参数时，将会自适应生成多个不同分辨率，不同码率的码流， 其中VideoTemplate的宽和高为多个码流中的最大分辨率，VideoTemplate中的码率为多个码流中的最高码率， VideoTemplate中的vcrf为多个码流中的最高质量。 当不设置分辨率、码率和vcrf时， ContentAdaptStream 参数生成的最高分辨率为视频源的分辨率，视频质量为接近vmaf95分。 若要开启该参数或了解计费细节, 请联系您的腾讯云商务。
                     */
                    void SetContentAdaptStream(const uint64_t& _contentAdaptStream);

                    /**
                     * 判断参数 ContentAdaptStream 是否已赋值
                     * @return ContentAdaptStream 是否已赋值
                     */
                    bool ContentAdaptStreamHasBeenSet() const;

                private:

                    /**
                     * 视频流的编码格式，可选值：
<li>libx264：H.264 编码</li>
<li>libx265：H.265 编码</li>
<li>av1：AOMedia Video 1 编码</li>
目前 H.265 编码必须指定分辨率，并且需要在 640*480 以内。av1 编码容器目前只支持 mp4 。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 视频流的码率，取值范围：0 和 [128, 35000]，单位：kbps。
当取值为 0，表示视频码率和原始视频保持一致。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。当填 0 时，系统将自动设置 gop 长度。
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * 视频恒定码率控制因子。取值范围为[0, 51]，填0表示禁用该参数。
如果没有特殊需求，不建议指定该参数。
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * 内容自适应编码。可选值：
<li>0：不开启</li>
<li>1：开启</li>
默认值: 0.   当开启该参数时，将会自适应生成多个不同分辨率，不同码率的码流， 其中VideoTemplate的宽和高为多个码流中的最大分辨率，VideoTemplate中的码率为多个码流中的最高码率， VideoTemplate中的vcrf为多个码流中的最高质量。 当不设置分辨率、码率和vcrf时， ContentAdaptStream 参数生成的最高分辨率为视频源的分辨率，视频质量为接近vmaf95分。 若要开启该参数或了解计费细节, 请联系您的腾讯云商务。
                     */
                    uint64_t m_contentAdaptStream;
                    bool m_contentAdaptStreamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
