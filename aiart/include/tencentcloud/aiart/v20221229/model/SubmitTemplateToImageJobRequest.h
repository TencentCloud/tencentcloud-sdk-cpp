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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEMPLATETOIMAGEJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEMPLATETOIMAGEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/Image.h>
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
                * SubmitTemplateToImageJob请求参数结构体
                */
                class SubmitTemplateToImageJobRequest : public AbstractModel
                {
                public:
                    SubmitTemplateToImageJobRequest();
                    ~SubmitTemplateToImageJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。Base64 和 Url 必须提供一个，如果都提供以 Url 为准。图片限制：单边分辨率小于5000且大于50，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @return Image <p>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。Base64 和 Url 必须提供一个，如果都提供以 Url 为准。图片限制：单边分辨率小于5000且大于50，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 设置<p>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。Base64 和 Url 必须提供一个，如果都提供以 Url 为准。图片限制：单边分辨率小于5000且大于50，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @param _image <p>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。Base64 和 Url 必须提供一个，如果都提供以 Url 为准。图片限制：单边分辨率小于5000且大于50，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>绘画风格当前仅支持美术馆风格（gallerying）。</p>
                     * @return Style <p>绘画风格当前仅支持美术馆风格（gallerying）。</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>绘画风格当前仅支持美术馆风格（gallerying）。</p>
                     * @param _style <p>绘画风格当前仅支持美术馆风格（gallerying）。</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>特效模式，默认使用人像模式。</p>枚举值：<ul><li> Person： 人像模式，仅支持上传人像图片。</li><li> Pet： 宠物模式，支持宠物等非人像图片。</li></ul>默认值：Person
                     * @return Mode <p>特效模式，默认使用人像模式。</p>枚举值：<ul><li> Person： 人像模式，仅支持上传人像图片。</li><li> Pet： 宠物模式，支持宠物等非人像图片。</li></ul>默认值：Person
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>特效模式，默认使用人像模式。</p>枚举值：<ul><li> Person： 人像模式，仅支持上传人像图片。</li><li> Pet： 宠物模式，支持宠物等非人像图片。</li></ul>默认值：Person
                     * @param _mode <p>特效模式，默认使用人像模式。</p>枚举值：<ul><li> Person： 人像模式，仅支持上传人像图片。</li><li> Pet： 宠物模式，支持宠物等非人像图片。</li></ul>默认值：Person
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
                     * 获取<p>为生成结果图添加显式水印标识的开关，默认为1。<br />1：添加。<br />0：不添加。<br />其他数值：默认按1处理。<br />建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * @return LogoAdd <p>为生成结果图添加显式水印标识的开关，默认为1。<br />1：添加。<br />0：不添加。<br />其他数值：默认按1处理。<br />建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成结果图添加显式水印标识的开关，默认为1。<br />1：添加。<br />0：不添加。<br />其他数值：默认按1处理。<br />建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * @param _logoAdd <p>为生成结果图添加显式水印标识的开关，默认为1。<br />1：添加。<br />0：不添加。<br />其他数值：默认按1处理。<br />建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
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
                     * 获取<p>标识内容设置。默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * @return LogoParam <p>标识内容设置。默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>标识内容设置。默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * @param _logoParam <p>标识内容设置。默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * <p>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。Base64 和 Url 必须提供一个，如果都提供以 Url 为准。图片限制：单边分辨率小于5000且大于50，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>绘画风格当前仅支持美术馆风格（gallerying）。</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>特效模式，默认使用人像模式。</p>枚举值：<ul><li> Person： 人像模式，仅支持上传人像图片。</li><li> Pet： 宠物模式，支持宠物等非人像图片。</li></ul>默认值：Person
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>为生成结果图添加显式水印标识的开关，默认为1。<br />1：添加。<br />0：不添加。<br />其他数值：默认按1处理。<br />建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITTEMPLATETOIMAGEJOBREQUEST_H_
