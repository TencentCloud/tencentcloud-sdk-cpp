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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEXTTOIMAGEJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEXTTOIMAGEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/LogoParam.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * SubmitTextToImageJob请求参数结构体
                */
                class SubmitTextToImageJobRequest : public AbstractModel
                {
                public:
                    SubmitTextToImageJobRequest();
                    ~SubmitTextToImageJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文本描述。<br>算法将根据输入的文本智能生成与之相关的图像。<br>不能为空，推荐使用中文。最多可传1024个 utf-8 字符。</p>
                     * @return Prompt <p>文本描述。<br>算法将根据输入的文本智能生成与之相关的图像。<br>不能为空，推荐使用中文。最多可传1024个 utf-8 字符。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>文本描述。<br>算法将根据输入的文本智能生成与之相关的图像。<br>不能为空，推荐使用中文。最多可传1024个 utf-8 字符。</p>
                     * @param _prompt <p>文本描述。<br>算法将根据输入的文本智能生成与之相关的图像。<br>不能为空，推荐使用中文。最多可传1024个 utf-8 字符。</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>垫图url列表，大小不超过10MB，支持 jpg jpeg png webp格式，最多3张图</p>
                     * @return Images <p>垫图url列表，大小不超过10MB，支持 jpg jpeg png webp格式，最多3张图</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>垫图url列表，大小不超过10MB，支持 jpg jpeg png webp格式，最多3张图</p>
                     * @param _images <p>垫图url列表，大小不超过10MB，支持 jpg jpeg png webp格式，最多3张图</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>生成图分辨率，默认1024:1024：</p><ul><li>宽高维度均在 [512, 2048] 像素范围内;</li><li>宽高乘积（即图像面积）不超过 1024×1024 像素;</li></ul>
                     * @return Resolution <p>生成图分辨率，默认1024:1024：</p><ul><li>宽高维度均在 [512, 2048] 像素范围内;</li><li>宽高乘积（即图像面积）不超过 1024×1024 像素;</li></ul>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>生成图分辨率，默认1024:1024：</p><ul><li>宽高维度均在 [512, 2048] 像素范围内;</li><li>宽高乘积（即图像面积）不超过 1024×1024 像素;</li></ul>
                     * @param _resolution <p>生成图分辨率，默认1024:1024：</p><ul><li>宽高维度均在 [512, 2048] 像素范围内;</li><li>宽高乘积（即图像面积）不超过 1024×1024 像素;</li></ul>
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
                     * 获取<p>随机种子，默认随机。<br>不传：随机种子生成。<br>正数：固定种子生成。<br>扩写开启时固定种子不生效，将保持随机。</p>
                     * @return Seed <p>随机种子，默认随机。<br>不传：随机种子生成。<br>正数：固定种子生成。<br>扩写开启时固定种子不生效，将保持随机。</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>随机种子，默认随机。<br>不传：随机种子生成。<br>正数：固定种子生成。<br>扩写开启时固定种子不生效，将保持随机。</p>
                     * @param _seed <p>随机种子，默认随机。<br>不传：随机种子生成。<br>正数：固定种子生成。<br>扩写开启时固定种子不生效，将保持随机。</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * @return LogoAdd <p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * @param _logoAdd <p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
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
                     * 获取<p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * @return LogoParam <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * @param _logoParam <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                    /**
                     * 获取<p>是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。<br>0：关闭改写<br>1：开启改写<br>建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：<a href="https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE">改写</a><br>示例值：1</p>
                     * @return Revise <p>是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。<br>0：关闭改写<br>1：开启改写<br>建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：<a href="https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE">改写</a><br>示例值：1</p>
                     * 
                     */
                    int64_t GetRevise() const;

                    /**
                     * 设置<p>是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。<br>0：关闭改写<br>1：开启改写<br>建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：<a href="https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE">改写</a><br>示例值：1</p>
                     * @param _revise <p>是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。<br>0：关闭改写<br>1：开启改写<br>建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：<a href="https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE">改写</a><br>示例值：1</p>
                     * 
                     */
                    void SetRevise(const int64_t& _revise);

                    /**
                     * 判断参数 Revise 是否已赋值
                     * @return Revise 是否已赋值
                     * 
                     */
                    bool ReviseHasBeenSet() const;

                private:

                    /**
                     * <p>文本描述。<br>算法将根据输入的文本智能生成与之相关的图像。<br>不能为空，推荐使用中文。最多可传1024个 utf-8 字符。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>垫图url列表，大小不超过10MB，支持 jpg jpeg png webp格式，最多3张图</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>生成图分辨率，默认1024:1024：</p><ul><li>宽高维度均在 [512, 2048] 像素范围内;</li><li>宽高乘积（即图像面积）不超过 1024×1024 像素;</li></ul>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>随机种子，默认随机。<br>不传：随机种子生成。<br>正数：固定种子生成。<br>扩写开启时固定种子不生效，将保持随机。</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * <p>是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。<br>0：关闭改写<br>1：开启改写<br>建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：<a href="https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE">改写</a><br>示例值：1</p>
                     */
                    int64_t m_revise;
                    bool m_reviseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEXTTOIMAGEJOBREQUEST_H_
