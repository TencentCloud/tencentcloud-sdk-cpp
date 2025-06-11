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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
<li>libx264：H.264 编码；</li>
<li>libx265：H.265 编码；</li>
<li>av1：AOMedia Video 1 编码；</li>
<li>H.266：H.266 编码。</li>
<font color=red>注意：</font>
<li> av1，H.266 编码容器目前只支持 mp4 ；</li>
<li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     * @return Codec 视频流的编码格式，可选值：
<li>libx264：H.264 编码；</li>
<li>libx265：H.265 编码；</li>
<li>av1：AOMedia Video 1 编码；</li>
<li>H.266：H.266 编码。</li>
<font color=red>注意：</font>
<li> av1，H.266 编码容器目前只支持 mp4 ；</li>
<li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置视频流的编码格式，可选值：
<li>libx264：H.264 编码；</li>
<li>libx265：H.265 编码；</li>
<li>av1：AOMedia Video 1 编码；</li>
<li>H.266：H.266 编码。</li>
<font color=red>注意：</font>
<li> av1，H.266 编码容器目前只支持 mp4 ；</li>
<li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     * @param _codec 视频流的编码格式，可选值：
<li>libx264：H.264 编码；</li>
<li>libx265：H.265 编码；</li>
<li>av1：AOMedia Video 1 编码；</li>
<li>H.266：H.266 编码。</li>
<font color=red>注意：</font>
<li> av1，H.266 编码容器目前只支持 mp4 ；</li>
<li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
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
                     * 获取视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     * @return Fps 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     * @param _fps 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为 0，表示帧率和原始视频保持一致。
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。
当取值为 0，表示由云点播自动设置码率。
                     * @return Bitrate 视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。
当取值为 0，表示由云点播自动设置码率。
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。
当取值为 0，表示由云点播自动设置码率。
                     * @param _bitrate 视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。
当取值为 0，表示由云点播自动设置码率。
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
                     * 获取分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * @return ResolutionAdaptive 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * @param _resolutionAdaptive 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     * 
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * @return Width 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * @param _width 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
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
                     * 获取视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
                     * @return Height 视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
                     * @param _height 视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
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
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * @param _fillType 填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：
<li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li>
<li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li>
<li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li>
<li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。

<font color=red>注意：</font>
<li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li>
<li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li>
<li>如果没有特殊需求，不建议指定该参数。</li>
                     * @return Vcrf 视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。

<font color=red>注意：</font>
<li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li>
<li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li>
<li>如果没有特殊需求，不建议指定该参数。</li>
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。

<font color=red>注意：</font>
<li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li>
<li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li>
<li>如果没有特殊需求，不建议指定该参数。</li>
                     * @param _vcrf 视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。

<font color=red>注意：</font>
<li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li>
<li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li>
<li>如果没有特殊需求，不建议指定该参数。</li>
                     * 
                     */
                    void SetVcrf(const uint64_t& _vcrf);

                    /**
                     * 判断参数 Vcrf 是否已赋值
                     * @return Vcrf 是否已赋值
                     * 
                     */
                    bool VcrfHasBeenSet() const;

                    /**
                     * 获取关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。
当填 0 或不填时，系统将自动设置 gop 长度。
                     * @return Gop 关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。
当填 0 或不填时，系统将自动设置 gop 长度。
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。
当填 0 或不填时，系统将自动设置 gop 长度。
                     * @param _gop 关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。
当填 0 或不填时，系统将自动设置 gop 长度。
                     * 
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：
<li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li>
<li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * @return PreserveHDRSwitch 当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：
<li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li>
<li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * 
                     */
                    std::string GetPreserveHDRSwitch() const;

                    /**
                     * 设置当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：
<li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li>
<li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * @param _preserveHDRSwitch 当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：
<li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li>
<li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * 
                     */
                    void SetPreserveHDRSwitch(const std::string& _preserveHDRSwitch);

                    /**
                     * 判断参数 PreserveHDRSwitch 是否已赋值
                     * @return PreserveHDRSwitch 是否已赋值
                     * 
                     */
                    bool PreserveHDRSwitchHasBeenSet() const;

                    /**
                     * 获取编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：
<li>hvc1 表示 hvc1 标签；</li>
<li>hev1 表示 hev1 标签。 </li>
默认值：hvc1。
                     * @return CodecTag 编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：
<li>hvc1 表示 hvc1 标签；</li>
<li>hev1 表示 hev1 标签。 </li>
默认值：hvc1。
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：
<li>hvc1 表示 hvc1 标签；</li>
<li>hev1 表示 hev1 标签。 </li>
默认值：hvc1。
                     * @param _codecTag 编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：
<li>hvc1 表示 hvc1 标签；</li>
<li>hev1 表示 hev1 标签。 </li>
默认值：hvc1。
                     * 
                     */
                    void SetCodecTag(const std::string& _codecTag);

                    /**
                     * 判断参数 CodecTag 是否已赋值
                     * @return CodecTag 是否已赋值
                     * 
                     */
                    bool CodecTagHasBeenSet() const;

                private:

                    /**
                     * 视频流的编码格式，可选值：
<li>libx264：H.264 编码；</li>
<li>libx265：H.265 编码；</li>
<li>av1：AOMedia Video 1 编码；</li>
<li>H.266：H.266 编码。</li>
<font color=red>注意：</font>
<li> av1，H.266 编码容器目前只支持 mp4 ；</li>
<li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
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
                     * 视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。
当取值为 0，表示由云点播自动设置码率。
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
                     * 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
<li>当 Width、Height 均为 0，则分辨率同源；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

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
                     * 视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。

<font color=red>注意：</font>
<li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li>
<li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li>
<li>如果没有特殊需求，不建议指定该参数。</li>
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * 关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。
当填 0 或不填时，系统将自动设置 gop 长度。
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：
<li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li>
<li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     */
                    std::string m_preserveHDRSwitch;
                    bool m_preserveHDRSwitchHasBeenSet;

                    /**
                     * 编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：
<li>hvc1 表示 hvc1 标签；</li>
<li>hev1 表示 hev1 标签。 </li>
默认值：hvc1。
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
