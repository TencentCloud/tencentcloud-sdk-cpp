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
                     * 获取文本描述。 
算法将根据输入的文本智能生成与之相关的图像。 
不能为空，推荐使用中文。最多可传1024个 utf-8 字符。
                     * @return Prompt 文本描述。 
算法将根据输入的文本智能生成与之相关的图像。 
不能为空，推荐使用中文。最多可传1024个 utf-8 字符。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置文本描述。 
算法将根据输入的文本智能生成与之相关的图像。 
不能为空，推荐使用中文。最多可传1024个 utf-8 字符。
                     * @param _prompt 文本描述。 
算法将根据输入的文本智能生成与之相关的图像。 
不能为空，推荐使用中文。最多可传1024个 utf-8 字符。
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
                     * 获取生成图分辨率，默认1024:1024：
 - 宽高维度均在 [512, 2048] 像素范围内;
 - 宽高乘积（即图像面积）不超过 1024×1024 像素;
                     * @return Resolution 生成图分辨率，默认1024:1024：
 - 宽高维度均在 [512, 2048] 像素范围内;
 - 宽高乘积（即图像面积）不超过 1024×1024 像素;
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置生成图分辨率，默认1024:1024：
 - 宽高维度均在 [512, 2048] 像素范围内;
 - 宽高乘积（即图像面积）不超过 1024×1024 像素;
                     * @param _resolution 生成图分辨率，默认1024:1024：
 - 宽高维度均在 [512, 2048] 像素范围内;
 - 宽高乘积（即图像面积）不超过 1024×1024 像素;
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
                     * 获取随机种子，默认随机。
不传：随机种子生成。
正数：固定种子生成。
扩写开启时固定种子不生效，将保持随机。
                     * @return Seed 随机种子，默认随机。
不传：随机种子生成。
正数：固定种子生成。
扩写开启时固定种子不生效，将保持随机。
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置随机种子，默认随机。
不传：随机种子生成。
正数：固定种子生成。
扩写开启时固定种子不生效，将保持随机。
                     * @param _seed 随机种子，默认随机。
不传：随机种子生成。
正数：固定种子生成。
扩写开启时固定种子不生效，将保持随机。
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
                     * 获取为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
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
                     * 获取标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @return LogoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @param _logoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
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
                     * 获取是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。
0：关闭改写
1：开启改写
建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：[改写](https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE)
示例值：1
                     * @return Revise 是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。
0：关闭改写
1：开启改写
建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：[改写](https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE)
示例值：1
                     * 
                     */
                    int64_t GetRevise() const;

                    /**
                     * 设置是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。
0：关闭改写
1：开启改写
建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：[改写](https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE)
示例值：1
                     * @param _revise 是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。
0：关闭改写
1：开启改写
建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：[改写](https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE)
示例值：1
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
                     * 文本描述。 
算法将根据输入的文本智能生成与之相关的图像。 
不能为空，推荐使用中文。最多可传1024个 utf-8 字符。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 生成图分辨率，默认1024:1024：
 - 宽高维度均在 [512, 2048] 像素范围内;
 - 宽高乘积（即图像面积）不超过 1024×1024 像素;
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 随机种子，默认随机。
不传：随机种子生成。
正数：固定种子生成。
扩写开启时固定种子不生效，将保持随机。
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * 是否开启prompt改写，为空时默认开启，改写预计会增加20s左右耗时。
0：关闭改写
1：开启改写
建议默认开启，如果关闭改写，需要调用方自己接改写，否则对生图效果有较大影响，改写方法可以参考：[改写](https://github.com/Tencent-Hunyuan/HunyuanImage-3.0/tree/main/PE)
示例值：1
                     */
                    int64_t m_revise;
                    bool m_reviseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEXTTOIMAGEJOBREQUEST_H_
