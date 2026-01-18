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
                     * 获取生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 

不同模型支持的分辨率选项:
1. Kling 720P(默认), 1080P。
2. Hailuo 768P(默认), 1080P。
3. Vidu 720P(默认)，1080P。
4. GV 720P(默认),1080P。
5. OS 720P, 图片仅支持1280x720、720x1280，暂不支持指定。

注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。
                     * @return Resolution 生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 

不同模型支持的分辨率选项:
1. Kling 720P(默认), 1080P。
2. Hailuo 768P(默认), 1080P。
3. Vidu 720P(默认)，1080P。
4. GV 720P(默认),1080P。
5. OS 720P, 图片仅支持1280x720、720x1280，暂不支持指定。

注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 

不同模型支持的分辨率选项:
1. Kling 720P(默认), 1080P。
2. Hailuo 768P(默认), 1080P。
3. Vidu 720P(默认)，1080P。
4. GV 720P(默认),1080P。
5. OS 720P, 图片仅支持1280x720、720x1280，暂不支持指定。

注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。
                     * @param _resolution 生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 

不同模型支持的分辨率选项:
1. Kling 720P(默认), 1080P。
2. Hailuo 768P(默认), 1080P。
3. Vidu 720P(默认)，1080P。
4. GV 720P(默认),1080P。
5. OS 720P, 图片仅支持1280x720、720x1280，暂不支持指定。

注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。
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
                     * 获取指定所生成视频的宽高比。 

不同模型对于此参数的支持：
1. Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。
2. Hailuo 暂不支持。
3. Vidu 仅文生和参考图生视频 支持[16:9、9:16、4:3、3:4、1:1]，其中仅q2支持4:3、3:4。
4. GV 16:9(默认值)、9:16。
5. OS 仅文生视频支持, 16:9(默认), 9:16。

注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。
                     * @return AspectRatio 指定所生成视频的宽高比。 

不同模型对于此参数的支持：
1. Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。
2. Hailuo 暂不支持。
3. Vidu 仅文生和参考图生视频 支持[16:9、9:16、4:3、3:4、1:1]，其中仅q2支持4:3、3:4。
4. GV 16:9(默认值)、9:16。
5. OS 仅文生视频支持, 16:9(默认), 9:16。

注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置指定所生成视频的宽高比。 

不同模型对于此参数的支持：
1. Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。
2. Hailuo 暂不支持。
3. Vidu 仅文生和参考图生视频 支持[16:9、9:16、4:3、3:4、1:1]，其中仅q2支持4:3、3:4。
4. GV 16:9(默认值)、9:16。
5. OS 仅文生视频支持, 16:9(默认), 9:16。

注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。
                     * @param _aspectRatio 指定所生成视频的宽高比。 

不同模型对于此参数的支持：
1. Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。
2. Hailuo 暂不支持。
3. Vidu 仅文生和参考图生视频 支持[16:9、9:16、4:3、3:4、1:1]，其中仅q2支持4:3、3:4。
4. GV 16:9(默认值)、9:16。
5. OS 仅文生视频支持, 16:9(默认), 9:16。

注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。
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
                     * 获取是否添加图标水印。
1. Hailuo 支持此参数。
2. Kling 支持此参数。
3. Vidu 支持此参数。
                     * @return LogoAdd 是否添加图标水印。
1. Hailuo 支持此参数。
2. Kling 支持此参数。
3. Vidu 支持此参数。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置是否添加图标水印。
1. Hailuo 支持此参数。
2. Kling 支持此参数。
3. Vidu 支持此参数。
                     * @param _logoAdd 是否添加图标水印。
1. Hailuo 支持此参数。
2. Kling 支持此参数。
3. Vidu 支持此参数。
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
                     * 获取为视频生成音频。接受的值包括 true 或 false。 

支持此参数的模型：
1. GV，默认true。
2. OS，默认true。
                     * @return EnableAudio 为视频生成音频。接受的值包括 true 或 false。 

支持此参数的模型：
1. GV，默认true。
2. OS，默认true。
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置为视频生成音频。接受的值包括 true 或 false。 

支持此参数的模型：
1. GV，默认true。
2. OS，默认true。
                     * @param _enableAudio 为视频生成音频。接受的值包括 true 或 false。 

支持此参数的模型：
1. GV，默认true。
2. OS，默认true。
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
                     * 获取错峰模型，目前仅支持Vidu模型。
错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。
                     * @return OffPeak 错峰模型，目前仅支持Vidu模型。
错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置错峰模型，目前仅支持Vidu模型。
错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。
                     * @param _offPeak 错峰模型，目前仅支持Vidu模型。
错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。
                     * 
                     */
                    void SetOffPeak(const bool& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                private:

                    /**
                     * 生成视频的分辨率，分辨率与选择模型及设置的视频时长相关。 

不同模型支持的分辨率选项:
1. Kling 720P(默认), 1080P。
2. Hailuo 768P(默认), 1080P。
3. Vidu 720P(默认)，1080P。
4. GV 720P(默认),1080P。
5. OS 720P, 图片仅支持1280x720、720x1280，暂不支持指定。

注意：除模型可支持的分辨率外，还可以生成 2K、4K分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 指定所生成视频的宽高比。 

不同模型对于此参数的支持：
1. Kling 仅文生视频支持, 16:9(默认值)、9:16、 1:1。
2. Hailuo 暂不支持。
3. Vidu 仅文生和参考图生视频 支持[16:9、9:16、4:3、3:4、1:1]，其中仅q2支持4:3、3:4。
4. GV 16:9(默认值)、9:16。
5. OS 仅文生视频支持, 16:9(默认), 9:16。

注：关于具体模型支持的宽高比例，可查看具体模型官网介绍获取更完整描述。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 是否添加图标水印。
1. Hailuo 支持此参数。
2. Kling 支持此参数。
3. Vidu 支持此参数。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 为视频生成音频。接受的值包括 true 或 false。 

支持此参数的模型：
1. GV，默认true。
2. OS，默认true。
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * 错峰模型，目前仅支持Vidu模型。
错峰模式下提交的任务，会在48小时内生成，未能完成的任务会被自动取消。
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
