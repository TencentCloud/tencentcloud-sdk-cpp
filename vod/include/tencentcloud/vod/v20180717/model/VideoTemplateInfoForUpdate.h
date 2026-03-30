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
                     * 获取<p>视频流的编码格式，可选值：</p><li>libx264：H.264 编码；</li><li>libx265：H.265 编码；</li><li>av1：AOMedia Video 1 编码；</li><li>H.266：H.266 编码。</li><font color="red">注意：</font><li> av1，H.266 编码容器目前只支持 mp4 ；</li><li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     * @return Codec <p>视频流的编码格式，可选值：</p><li>libx264：H.264 编码；</li><li>libx265：H.265 编码；</li><li>av1：AOMedia Video 1 编码；</li><li>H.266：H.266 编码。</li><font color="red">注意：</font><li> av1，H.266 编码容器目前只支持 mp4 ；</li><li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>视频流的编码格式，可选值：</p><li>libx264：H.264 编码；</li><li>libx265：H.265 编码；</li><li>av1：AOMedia Video 1 编码；</li><li>H.266：H.266 编码。</li><font color="red">注意：</font><li> av1，H.266 编码容器目前只支持 mp4 ；</li><li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     * @param _codec <p>视频流的编码格式，可选值：</p><li>libx264：H.264 编码；</li><li>libx265：H.265 编码；</li><li>av1：AOMedia Video 1 编码；</li><li>H.266：H.266 编码。</li><font color="red">注意：</font><li> av1，H.266 编码容器目前只支持 mp4 ；</li><li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
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
                     * 获取<p>视频帧率，取值范围：[0, 100]，单位：Hz。<br>当取值为 0，表示帧率和原始视频保持一致。</p>
                     * @return Fps <p>视频帧率，取值范围：[0, 100]，单位：Hz。<br>当取值为 0，表示帧率和原始视频保持一致。</p>
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置<p>视频帧率，取值范围：[0, 100]，单位：Hz。<br>当取值为 0，表示帧率和原始视频保持一致。</p>
                     * @param _fps <p>视频帧率，取值范围：[0, 100]，单位：Hz。<br>当取值为 0，表示帧率和原始视频保持一致。</p>
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
                     * 获取<p>视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。<br>当取值为 0，表示由云点播自动设置码率。</p>
                     * @return Bitrate <p>视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。<br>当取值为 0，表示由云点播自动设置码率。</p>
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置<p>视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。<br>当取值为 0，表示由云点播自动设置码率。</p>
                     * @param _bitrate <p>视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。<br>当取值为 0，表示由云点播自动设置码率。</p>
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
                     * 获取<p>分辨率自适应，可选值：</p><li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li><li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * @return ResolutionAdaptive <p>分辨率自适应，可选值：</p><li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li><li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置<p>分辨率自适应，可选值：</p><li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li><li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     * @param _resolutionAdaptive <p>分辨率自适应，可选值：</p><li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li><li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
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
                     * 获取<p>视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p><li>当 Width、Height 均为 0，则分辨率同源；</li><li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li><li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li><li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * @return Width <p>视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p><li>当 Width、Height 均为 0，则分辨率同源；</li><li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li><li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li><li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p><li>当 Width、Height 均为 0，则分辨率同源；</li><li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li><li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li><li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     * @param _width <p>视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p><li>当 Width、Height 均为 0，则分辨率同源；</li><li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li><li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li><li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
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
                     * 获取<p>视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p>
                     * @return Height <p>视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p>
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置<p>视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p>
                     * @param _height <p>视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p>
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
                     * 获取<p>填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：</p><li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li><li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li><li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li><li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * @return FillType <p>填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：</p><li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li><li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li><li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li><li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置<p>填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：</p><li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li><li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li><li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li><li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     * @param _fillType <p>填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：</p><li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li><li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li><li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li><li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
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
                     * 获取<p>视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。</p><p><font color="red">注意：</font></p><li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li><li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li><li>如果没有特殊需求，不建议指定该参数。</li>
                     * @return Vcrf <p>视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。</p><p><font color="red">注意：</font></p><li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li><li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li><li>如果没有特殊需求，不建议指定该参数。</li>
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置<p>视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。</p><p><font color="red">注意：</font></p><li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li><li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li><li>如果没有特殊需求，不建议指定该参数。</li>
                     * @param _vcrf <p>视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。</p><p><font color="red">注意：</font></p><li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li><li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li><li>如果没有特殊需求，不建议指定该参数。</li>
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
                     * 获取<p>关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。<br>当填 0 或不填时，系统将自动设置 gop 长度。</p>
                     * @return Gop <p>关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。<br>当填 0 或不填时，系统将自动设置 gop 长度。</p>
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置<p>关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。<br>当填 0 或不填时，系统将自动设置 gop 长度。</p>
                     * @param _gop <p>关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。<br>当填 0 或不填时，系统将自动设置 gop 长度。</p>
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
                     * 获取<p>当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：</p><li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li><li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * @return PreserveHDRSwitch <p>当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：</p><li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li><li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * 
                     */
                    std::string GetPreserveHDRSwitch() const;

                    /**
                     * 设置<p>当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：</p><li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li><li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     * @param _preserveHDRSwitch <p>当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：</p><li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li><li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
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
                     * 获取<p>编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：</p><li>hvc1 表示 hvc1 标签；</li><li>hev1 表示 hev1 标签。 </li>默认值：hvc1。
                     * @return CodecTag <p>编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：</p><li>hvc1 表示 hvc1 标签；</li><li>hev1 表示 hev1 标签。 </li>默认值：hvc1。
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置<p>编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：</p><li>hvc1 表示 hvc1 标签；</li><li>hev1 表示 hev1 标签。 </li>默认值：hvc1。
                     * @param _codecTag <p>编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：</p><li>hvc1 表示 hvc1 标签；</li><li>hev1 表示 hev1 标签。 </li>默认值：hvc1。
                     * 
                     */
                    void SetCodecTag(const std::string& _codecTag);

                    /**
                     * 判断参数 CodecTag 是否已赋值
                     * @return CodecTag 是否已赋值
                     * 
                     */
                    bool CodecTagHasBeenSet() const;

                    /**
                     * 获取<p>Gop数值单位。</p><p>枚举值：</p><ul><li>frame： 表示帧数。</li><li>second： 表示秒数。</li></ul><p>默认值：frame</p>
                     * @return GopUnit <p>Gop数值单位。</p><p>枚举值：</p><ul><li>frame： 表示帧数。</li><li>second： 表示秒数。</li></ul><p>默认值：frame</p>
                     * 
                     */
                    std::string GetGopUnit() const;

                    /**
                     * 设置<p>Gop数值单位。</p><p>枚举值：</p><ul><li>frame： 表示帧数。</li><li>second： 表示秒数。</li></ul><p>默认值：frame</p>
                     * @param _gopUnit <p>Gop数值单位。</p><p>枚举值：</p><ul><li>frame： 表示帧数。</li><li>second： 表示秒数。</li></ul><p>默认值：frame</p>
                     * 
                     */
                    void SetGopUnit(const std::string& _gopUnit);

                    /**
                     * 判断参数 GopUnit 是否已赋值
                     * @return GopUnit 是否已赋值
                     * 
                     */
                    bool GopUnitHasBeenSet() const;

                    /**
                     * 获取<p>码率控制模式。</p><p>枚举值：</p><ul><li>VBR： Variable Bit Rate，动态比特率，根据视频画面的复杂度动态调整输出的码率，使得画面质量更高，适用于存储场景和对画面质量要求较高的应用。</li><li>ABR： Average Bit Rate，平均比特率，尽量保持输出视频的平均码率稳定，但允许短期内的码率波动，适用于需要在保持一定画质的情况下尽量减少整体码率的场景。</li><li>CBR： Constant Bit Rate，恒定比特率，指视频编码时输出的码率保持恒定不变，不考虑画面复杂度的变化，适用于对网络带宽要求较为严格的场景，如直播等。</li><li>VCRF： Constant Rate Factor，恒定质量因子，通过设定一个质量因子来控制视频质量，实现视频的恒定质量编码，码率会根据内容的复杂度自动调整，适用于希望保持一定画质的场景。</li></ul><p>默认值：VBR</p>
                     * @return Mode <p>码率控制模式。</p><p>枚举值：</p><ul><li>VBR： Variable Bit Rate，动态比特率，根据视频画面的复杂度动态调整输出的码率，使得画面质量更高，适用于存储场景和对画面质量要求较高的应用。</li><li>ABR： Average Bit Rate，平均比特率，尽量保持输出视频的平均码率稳定，但允许短期内的码率波动，适用于需要在保持一定画质的情况下尽量减少整体码率的场景。</li><li>CBR： Constant Bit Rate，恒定比特率，指视频编码时输出的码率保持恒定不变，不考虑画面复杂度的变化，适用于对网络带宽要求较为严格的场景，如直播等。</li><li>VCRF： Constant Rate Factor，恒定质量因子，通过设定一个质量因子来控制视频质量，实现视频的恒定质量编码，码率会根据内容的复杂度自动调整，适用于希望保持一定画质的场景。</li></ul><p>默认值：VBR</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>码率控制模式。</p><p>枚举值：</p><ul><li>VBR： Variable Bit Rate，动态比特率，根据视频画面的复杂度动态调整输出的码率，使得画面质量更高，适用于存储场景和对画面质量要求较高的应用。</li><li>ABR： Average Bit Rate，平均比特率，尽量保持输出视频的平均码率稳定，但允许短期内的码率波动，适用于需要在保持一定画质的情况下尽量减少整体码率的场景。</li><li>CBR： Constant Bit Rate，恒定比特率，指视频编码时输出的码率保持恒定不变，不考虑画面复杂度的变化，适用于对网络带宽要求较为严格的场景，如直播等。</li><li>VCRF： Constant Rate Factor，恒定质量因子，通过设定一个质量因子来控制视频质量，实现视频的恒定质量编码，码率会根据内容的复杂度自动调整，适用于希望保持一定画质的场景。</li></ul><p>默认值：VBR</p>
                     * @param _mode <p>码率控制模式。</p><p>枚举值：</p><ul><li>VBR： Variable Bit Rate，动态比特率，根据视频画面的复杂度动态调整输出的码率，使得画面质量更高，适用于存储场景和对画面质量要求较高的应用。</li><li>ABR： Average Bit Rate，平均比特率，尽量保持输出视频的平均码率稳定，但允许短期内的码率波动，适用于需要在保持一定画质的情况下尽量减少整体码率的场景。</li><li>CBR： Constant Bit Rate，恒定比特率，指视频编码时输出的码率保持恒定不变，不考虑画面复杂度的变化，适用于对网络带宽要求较为严格的场景，如直播等。</li><li>VCRF： Constant Rate Factor，恒定质量因子，通过设定一个质量因子来控制视频质量，实现视频的恒定质量编码，码率会根据内容的复杂度自动调整，适用于希望保持一定画质的场景。</li></ul><p>默认值：VBR</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>最大连续B帧数，默认为自动， -1 表示修改为自动值。</p><p>取值范围：[-1, 16]</p>
                     * @return Bframes <p>最大连续B帧数，默认为自动， -1 表示修改为自动值。</p><p>取值范围：[-1, 16]</p>
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置<p>最大连续B帧数，默认为自动， -1 表示修改为自动值。</p><p>取值范围：[-1, 16]</p>
                     * @param _bframes <p>最大连续B帧数，默认为自动， -1 表示修改为自动值。</p><p>取值范围：[-1, 16]</p>
                     * 
                     */
                    void SetBframes(const int64_t& _bframes);

                    /**
                     * 判断参数 Bframes 是否已赋值
                     * @return Bframes 是否已赋值
                     * 
                     */
                    bool BframesHasBeenSet() const;

                    /**
                     * 获取<p>分片平均时长。0或不填表示自动，将根据视频的 GOP 等特征自动选择合适的分片时长。</p><p>取值范围：[0, 10]</p><p>单位：秒</p><p>只支持转码模板，暂不支持自适应码流模板。</p>
                     * @return HlsTime <p>分片平均时长。0或不填表示自动，将根据视频的 GOP 等特征自动选择合适的分片时长。</p><p>取值范围：[0, 10]</p><p>单位：秒</p><p>只支持转码模板，暂不支持自适应码流模板。</p>
                     * 
                     */
                    int64_t GetHlsTime() const;

                    /**
                     * 设置<p>分片平均时长。0或不填表示自动，将根据视频的 GOP 等特征自动选择合适的分片时长。</p><p>取值范围：[0, 10]</p><p>单位：秒</p><p>只支持转码模板，暂不支持自适应码流模板。</p>
                     * @param _hlsTime <p>分片平均时长。0或不填表示自动，将根据视频的 GOP 等特征自动选择合适的分片时长。</p><p>取值范围：[0, 10]</p><p>单位：秒</p><p>只支持转码模板，暂不支持自适应码流模板。</p>
                     * 
                     */
                    void SetHlsTime(const int64_t& _hlsTime);

                    /**
                     * 判断参数 HlsTime 是否已赋值
                     * @return HlsTime 是否已赋值
                     * 
                     */
                    bool HlsTimeHasBeenSet() const;

                private:

                    /**
                     * <p>视频流的编码格式，可选值：</p><li>libx264：H.264 编码；</li><li>libx265：H.265 编码；</li><li>av1：AOMedia Video 1 编码；</li><li>H.266：H.266 编码。</li><font color="red">注意：</font><li> av1，H.266 编码容器目前只支持 mp4 ；</li><li> H.266 目前只支持恒定 CRF 码率控制方式。 </li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>视频帧率，取值范围：[0, 100]，单位：Hz。<br>当取值为 0，表示帧率和原始视频保持一致。</p>
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * <p>视频流的码率，取值范围：0 和 [128, 100000]，单位：kbps。<br>当取值为 0，表示由云点播自动设置码率。</p>
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>分辨率自适应，可选值：</p><li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li><li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * <p>视频流宽度（或长边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p><li>当 Width、Height 均为 0，则分辨率同源；</li><li>当 Width 为 0，Height 非 0，则 Width 按比例缩放；</li><li>当 Width 非 0，Height 为 0，则 Height 按比例缩放；</li><li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>视频流高度（或短边）的最大值，取值范围：0 和 [128, 8192]，单位：px。</p>
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>填充方式，当视频流配置宽高参数与原始视频的宽高比不一致时，对转码的处理方式，即为“填充”。可选填充方式：</p><li> stretch：拉伸，对每一帧进行拉伸，填满整个画面，可能导致转码后的视频被“压扁“或者“拉长“；</li><li>black：留黑，保持视频宽高比不变，边缘剩余部分使用黑色填充。</li><li>white：留白，保持视频宽高比不变，边缘剩余部分使用白色填充。</li><li>gauss：高斯模糊，保持视频宽高比不变，边缘剩余部分使用高斯模糊填充。</li>
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * <p>视频恒定码率控制因子，取值范围为[1, 51]，填 0 表示禁用该参数。</p><p><font color="red">注意：</font></p><li>如果指定该参数，将使用 CRF 的码率控制方式做转码（视频码率将不再生效）；</li><li>当指定视频流编码格式为 H.266 时，该字段必填，推荐值为 28；</li><li>如果没有特殊需求，不建议指定该参数。</li>
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * <p>关键帧 I 帧之间的间隔，取值范围：0 和 [1, 100000]，单位：帧数。<br>当填 0 或不填时，系统将自动设置 gop 长度。</p>
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * <p>当原始视频为 HDR（High Dynamic Range）时，转码输出是否依然保持 HDR。取值范围：</p><li>ON: 如果原始文件是 HDR，则转码输出保持 HDR；否则转码输出为 SDR （Standard Dynamic Range）。</li><li>OFF: 无论原始文件是 HDR 还是 SDR，转码输出均为 SDR。</li>
                     */
                    std::string m_preserveHDRSwitch;
                    bool m_preserveHDRSwitchHasBeenSet;

                    /**
                     * <p>编码标签，仅当视频流的编码格式为 H.265 编码时有效，可选值：</p><li>hvc1 表示 hvc1 标签；</li><li>hev1 表示 hev1 标签。 </li>默认值：hvc1。
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                    /**
                     * <p>Gop数值单位。</p><p>枚举值：</p><ul><li>frame： 表示帧数。</li><li>second： 表示秒数。</li></ul><p>默认值：frame</p>
                     */
                    std::string m_gopUnit;
                    bool m_gopUnitHasBeenSet;

                    /**
                     * <p>码率控制模式。</p><p>枚举值：</p><ul><li>VBR： Variable Bit Rate，动态比特率，根据视频画面的复杂度动态调整输出的码率，使得画面质量更高，适用于存储场景和对画面质量要求较高的应用。</li><li>ABR： Average Bit Rate，平均比特率，尽量保持输出视频的平均码率稳定，但允许短期内的码率波动，适用于需要在保持一定画质的情况下尽量减少整体码率的场景。</li><li>CBR： Constant Bit Rate，恒定比特率，指视频编码时输出的码率保持恒定不变，不考虑画面复杂度的变化，适用于对网络带宽要求较为严格的场景，如直播等。</li><li>VCRF： Constant Rate Factor，恒定质量因子，通过设定一个质量因子来控制视频质量，实现视频的恒定质量编码，码率会根据内容的复杂度自动调整，适用于希望保持一定画质的场景。</li></ul><p>默认值：VBR</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>最大连续B帧数，默认为自动， -1 表示修改为自动值。</p><p>取值范围：[-1, 16]</p>
                     */
                    int64_t m_bframes;
                    bool m_bframesHasBeenSet;

                    /**
                     * <p>分片平均时长。0或不填表示自动，将根据视频的 GOP 等特征自动选择合适的分片时长。</p><p>取值范围：[0, 10]</p><p>单位：秒</p><p>只支持转码模板，暂不支持自适应码流模板。</p>
                     */
                    int64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
