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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOEXTRAPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOEXTRAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 用于场景化创作视频时用到的扩展参数信息。
                */
                class SceneVideoExtraParam : public AbstractModel
                {
                public:
                    SceneVideoExtraParam();
                    ~SceneVideoExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指定输出分辨率。选项:720P, 1080P, 2K, 4K。</p>
                     * @return Resolution <p>指定输出分辨率。选项:720P, 1080P, 2K, 4K。</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>指定输出分辨率。选项:720P, 1080P, 2K, 4K。</p>
                     * @param _resolution <p>指定输出分辨率。选项:720P, 1080P, 2K, 4K。</p>
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
                     * 获取<p>指定输出视频的宽高比，示例：16:9。</p>
                     * @return AspectRatio <p>指定输出视频的宽高比，示例：16:9。</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>指定输出视频的宽高比，示例：16:9。</p>
                     * @param _aspectRatio <p>指定输出视频的宽高比，示例：16:9。</p>
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
                     * 获取<p>错峰模型，仅支持的模型可使用。</p>
                     * @return OffPeak <p>错峰模型，仅支持的模型可使用。</p>
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置<p>错峰模型，仅支持的模型可使用。</p>
                     * @param _offPeak <p>错峰模型，仅支持的模型可使用。</p>
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
                     * 获取<p>自动添加水印，默认左上角添加 &quot;AI生成&quot; 标识。</p>
                     * @return LogoAdd <p>自动添加水印，默认左上角添加 &quot;AI生成&quot; 标识。</p>
                     * 
                     */
                    bool GetLogoAdd() const;

                    /**
                     * 设置<p>自动添加水印，默认左上角添加 &quot;AI生成&quot; 标识。</p>
                     * @param _logoAdd <p>自动添加水印，默认左上角添加 &quot;AI生成&quot; 标识。</p>
                     * 
                     */
                    void SetLogoAdd(const bool& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取<p>使用音画同出。</p>
                     * @return EnableAudio <p>使用音画同出。</p>
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置<p>使用音画同出。</p>
                     * @param _enableAudio <p>使用音画同出。</p>
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
                     * 获取<p>生成背景音乐。</p>
                     * @return EnableBgm <p>生成背景音乐。</p>
                     * 
                     */
                    bool GetEnableBgm() const;

                    /**
                     * 设置<p>生成背景音乐。</p>
                     * @param _enableBgm <p>生成背景音乐。</p>
                     * 
                     */
                    void SetEnableBgm(const bool& _enableBgm);

                    /**
                     * 判断参数 EnableBgm 是否已赋值
                     * @return EnableBgm 是否已赋值
                     * 
                     */
                    bool EnableBgmHasBeenSet() const;

                    /**
                     * 获取<p>对输入的Prompt进行优化。</p>
                     * @return EnablePromptEnhance <p>对输入的Prompt进行优化。</p>
                     * 
                     */
                    bool GetEnablePromptEnhance() const;

                    /**
                     * 设置<p>对输入的Prompt进行优化。</p>
                     * @param _enablePromptEnhance <p>对输入的Prompt进行优化。</p>
                     * 
                     */
                    void SetEnablePromptEnhance(const bool& _enablePromptEnhance);

                    /**
                     * 判断参数 EnablePromptEnhance 是否已赋值
                     * @return EnablePromptEnhance 是否已赋值
                     * 
                     */
                    bool EnablePromptEnhanceHasBeenSet() const;

                    /**
                     * 获取<p>回调URL。</p>
                     * @return CallbackUrl <p>回调URL。</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调URL。</p>
                     * @param _callbackUrl <p>回调URL。</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * <p>指定输出分辨率。选项:720P, 1080P, 2K, 4K。</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>指定输出视频的宽高比，示例：16:9。</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>错峰模型，仅支持的模型可使用。</p>
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * <p>自动添加水印，默认左上角添加 &quot;AI生成&quot; 标识。</p>
                     */
                    bool m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>使用音画同出。</p>
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * <p>生成背景音乐。</p>
                     */
                    bool m_enableBgm;
                    bool m_enableBgmHasBeenSet;

                    /**
                     * <p>对输入的Prompt进行优化。</p>
                     */
                    bool m_enablePromptEnhance;
                    bool m_enablePromptEnhanceHasBeenSet;

                    /**
                     * <p>回调URL。</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOEXTRAPARAM_H_
