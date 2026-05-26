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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_

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
                * 用于AIGC创作视频时用到的扩展参数信息。
                */
                class AigcVideoExtraParam : public AbstractModel
                {
                public:
                    AigcVideoExtraParam();
                    ~AigcVideoExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 </p><p>不同模型支持的分辨率选项:</p><ol><li>Kling 720P(默认)，1080P。Kling 3.0、Kling 3.0-Omni 支持 4K。</li><li>Hailuo 768P(默认)，1080P。</li><li>Vidu 540P，720P(默认)，1080P。</li><li>PixVerse 540P，720P(默认)，1080P。</li><li>H2 720P，1080P(默认)。</li></ol><p>注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。</p>
                     * @return Resolution <p>生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 </p><p>不同模型支持的分辨率选项:</p><ol><li>Kling 720P(默认)，1080P。Kling 3.0、Kling 3.0-Omni 支持 4K。</li><li>Hailuo 768P(默认)，1080P。</li><li>Vidu 540P，720P(默认)，1080P。</li><li>PixVerse 540P，720P(默认)，1080P。</li><li>H2 720P，1080P(默认)。</li></ol><p>注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 </p><p>不同模型支持的分辨率选项:</p><ol><li>Kling 720P(默认)，1080P。Kling 3.0、Kling 3.0-Omni 支持 4K。</li><li>Hailuo 768P(默认)，1080P。</li><li>Vidu 540P，720P(默认)，1080P。</li><li>PixVerse 540P，720P(默认)，1080P。</li><li>H2 720P，1080P(默认)。</li></ol><p>注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。</p>
                     * @param _resolution <p>生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 </p><p>不同模型支持的分辨率选项:</p><ol><li>Kling 720P(默认)，1080P。Kling 3.0、Kling 3.0-Omni 支持 4K。</li><li>Hailuo 768P(默认)，1080P。</li><li>Vidu 540P，720P(默认)，1080P。</li><li>PixVerse 540P，720P(默认)，1080P。</li><li>H2 720P，1080P(默认)。</li></ol><p>注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>指定所生成视频的宽高比。 </p><p>不同模型对于此参数的支持：</p><ol><li>Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。</li><li>Hailuo 暂不支持。</li><li>Vidu 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1]，其中仅 q2 支持 4:3、3:4。</li><li>PixVerse 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1、2:3、3:2、21:9]，其中仅 v6、c1 支持 2:3、3:2、21:9。</li><li>H2 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、4:5、5:4、1:1、21:9、9:21]。</li></ol><p>注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。</p>
                     * @return AspectRatio <p>指定所生成视频的宽高比。 </p><p>不同模型对于此参数的支持：</p><ol><li>Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。</li><li>Hailuo 暂不支持。</li><li>Vidu 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1]，其中仅 q2 支持 4:3、3:4。</li><li>PixVerse 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1、2:3、3:2、21:9]，其中仅 v6、c1 支持 2:3、3:2、21:9。</li><li>H2 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、4:5、5:4、1:1、21:9、9:21]。</li></ol><p>注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>指定所生成视频的宽高比。 </p><p>不同模型对于此参数的支持：</p><ol><li>Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。</li><li>Hailuo 暂不支持。</li><li>Vidu 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1]，其中仅 q2 支持 4:3、3:4。</li><li>PixVerse 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1、2:3、3:2、21:9]，其中仅 v6、c1 支持 2:3、3:2、21:9。</li><li>H2 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、4:5、5:4、1:1、21:9、9:21]。</li></ol><p>注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。</p>
                     * @param _aspectRatio <p>指定所生成视频的宽高比。 </p><p>不同模型对于此参数的支持：</p><ol><li>Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。</li><li>Hailuo 暂不支持。</li><li>Vidu 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1]，其中仅 q2 支持 4:3、3:4。</li><li>PixVerse 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1、2:3、3:2、21:9]，其中仅 v6、c1 支持 2:3、3:2、21:9。</li><li>H2 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、4:5、5:4、1:1、21:9、9:21]。</li></ol><p>注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。</p>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取<p>是否添加图标水印。</p><ol><li>Hailuo 支持此参数。</li><li>Kling 支持此参数。</li><li>Vidu 支持此参数。</li><li>H2 支持此参数。</li></ol>
                     * @return LogoAdd <p>是否添加图标水印。</p><ol><li>Hailuo 支持此参数。</li><li>Kling 支持此参数。</li><li>Vidu 支持此参数。</li><li>H2 支持此参数。</li></ol>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>是否添加图标水印。</p><ol><li>Hailuo 支持此参数。</li><li>Kling 支持此参数。</li><li>Vidu 支持此参数。</li><li>H2 支持此参数。</li></ol>
                     * @param _logoAdd <p>是否添加图标水印。</p><ol><li>Hailuo 支持此参数。</li><li>Kling 支持此参数。</li><li>Vidu 支持此参数。</li><li>H2 支持此参数。</li></ol>
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取<p>为视频生成音频。接受的值包括 true 或 false。 </p><p>支持此参数的模型：</p><ol><li>Vidu，仅 q3 系列模型支持该参数，默认 false。</li><li>PixVerse，默认 false。</li><li>Kling，默认 false。</li></ol>
                     * @return EnableAudio <p>为视频生成音频。接受的值包括 true 或 false。 </p><p>支持此参数的模型：</p><ol><li>Vidu，仅 q3 系列模型支持该参数，默认 false。</li><li>PixVerse，默认 false。</li><li>Kling，默认 false。</li></ol>
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置<p>为视频生成音频。接受的值包括 true 或 false。 </p><p>支持此参数的模型：</p><ol><li>Vidu，仅 q3 系列模型支持该参数，默认 false。</li><li>PixVerse，默认 false。</li><li>Kling，默认 false。</li></ol>
                     * @param _enableAudio <p>为视频生成音频。接受的值包括 true 或 false。 </p><p>支持此参数的模型：</p><ol><li>Vidu，仅 q3 系列模型支持该参数，默认 false。</li><li>PixVerse，默认 false。</li><li>Kling，默认 false。</li></ol>
                     * 
                     */
                    void SetEnableAudio(const bool& _enableAudio);

                    /**
                     * 判断参数 EnableAudio 是否已赋值
                     * @return EnableAudio 是否已赋值
                     * 
                     */
                    bool EnableAudioHasBeenSet() const;

                    /**
                     * 获取<p>错峰模型，目前仅支持Vidu模型。<br>错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。</p>
                     * @return OffPeak <p>错峰模型，目前仅支持Vidu模型。<br>错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。</p>
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置<p>错峰模型，目前仅支持Vidu模型。<br>错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。</p>
                     * @param _offPeak <p>错峰模型，目前仅支持Vidu模型。<br>错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。</p>
                     * 
                     */
                    void SetOffPeak(const bool& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                    /**
                     * 获取<p>是否为生成的视频添加背景音乐。默认：false，可选值 true 、false。<br>注意：部分模型的版本支持。</p>
                     * @return EnableBgm <p>是否为生成的视频添加背景音乐。默认：false，可选值 true 、false。<br>注意：部分模型的版本支持。</p>
                     * 
                     */
                    bool GetEnableBgm() const;

                    /**
                     * 设置<p>是否为生成的视频添加背景音乐。默认：false，可选值 true 、false。<br>注意：部分模型的版本支持。</p>
                     * @param _enableBgm <p>是否为生成的视频添加背景音乐。默认：false，可选值 true 、false。<br>注意：部分模型的版本支持。</p>
                     * 
                     */
                    void SetEnableBgm(const bool& _enableBgm);

                    /**
                     * 判断参数 EnableBgm 是否已赋值
                     * @return EnableBgm 是否已赋值
                     * 
                     */
                    bool EnableBgmHasBeenSet() const;

                private:

                    /**
                     * <p>生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 </p><p>不同模型支持的分辨率选项:</p><ol><li>Kling 720P(默认)，1080P。Kling 3.0、Kling 3.0-Omni 支持 4K。</li><li>Hailuo 768P(默认)，1080P。</li><li>Vidu 540P，720P(默认)，1080P。</li><li>PixVerse 540P，720P(默认)，1080P。</li><li>H2 720P，1080P(默认)。</li></ol><p>注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>指定所生成视频的宽高比。 </p><p>不同模型对于此参数的支持：</p><ol><li>Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。</li><li>Hailuo 暂不支持。</li><li>Vidu 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1]，其中仅 q2 支持 4:3、3:4。</li><li>PixVerse 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、1:1、2:3、3:2、21:9]，其中仅 v6、c1 支持 2:3、3:2、21:9。</li><li>H2 仅文生和参考图生视频支持 [16:9、9:16、4:3、3:4、4:5、5:4、1:1、21:9、9:21]。</li></ol><p>注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>是否添加图标水印。</p><ol><li>Hailuo 支持此参数。</li><li>Kling 支持此参数。</li><li>Vidu 支持此参数。</li><li>H2 支持此参数。</li></ol>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>为视频生成音频。接受的值包括 true 或 false。 </p><p>支持此参数的模型：</p><ol><li>Vidu，仅 q3 系列模型支持该参数，默认 false。</li><li>PixVerse，默认 false。</li><li>Kling，默认 false。</li></ol>
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * <p>错峰模型，目前仅支持Vidu模型。<br>错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。</p>
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * <p>是否为生成的视频添加背景音乐。默认：false，可选值 true 、false。<br>注意：部分模型的版本支持。</p>
                     */
                    bool m_enableBgm;
                    bool m_enableBgmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
