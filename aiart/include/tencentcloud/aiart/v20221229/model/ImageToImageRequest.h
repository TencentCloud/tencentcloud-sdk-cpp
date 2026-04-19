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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGEREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/ResultConfig.h>
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
                * ImageToImage请求参数结构体
                */
                class ImageToImageRequest : public AbstractModel
                {
                public:
                    ImageToImageRequest();
                    ~ImageToImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输入图 Base64 数据。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @return InputImage <p>输入图 Base64 数据。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    std::string GetInputImage() const;

                    /**
                     * 设置<p>输入图 Base64 数据。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @param _inputImage <p>输入图 Base64 数据。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    void SetInputImage(const std::string& _inputImage);

                    /**
                     * 判断参数 InputImage 是否已赋值
                     * @return InputImage 是否已赋值
                     * 
                     */
                    bool InputImageHasBeenSet() const;

                    /**
                     * 获取<p>输入图 Url。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @return InputUrl <p>输入图 Url。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置<p>输入图 Url。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @param _inputUrl <p>输入图 Url。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                    /**
                     * 获取<p>文本描述。<br>用于在输入图的基础上引导生成图效果，增加生成结果中出现描述内容的可能。<br>推荐使用中文。最多支持256个 utf-8 字符。</p>
                     * @return Prompt <p>文本描述。<br>用于在输入图的基础上引导生成图效果，增加生成结果中出现描述内容的可能。<br>推荐使用中文。最多支持256个 utf-8 字符。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>文本描述。<br>用于在输入图的基础上引导生成图效果，增加生成结果中出现描述内容的可能。<br>推荐使用中文。最多支持256个 utf-8 字符。</p>
                     * @param _prompt <p>文本描述。<br>用于在输入图的基础上引导生成图效果，增加生成结果中出现描述内容的可能。<br>推荐使用中文。最多支持256个 utf-8 字符。</p>
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
                     * 获取<p>反向文本描述。<br>用于一定程度上从反面引导模型生成的走向，减少生成结果中出现描述内容的可能，但不能完全杜绝。<br>推荐使用中文。最多可传256个 utf-8 字符。</p>
                     * @return NegativePrompt <p>反向文本描述。<br>用于一定程度上从反面引导模型生成的走向，减少生成结果中出现描述内容的可能，但不能完全杜绝。<br>推荐使用中文。最多可传256个 utf-8 字符。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>反向文本描述。<br>用于一定程度上从反面引导模型生成的走向，减少生成结果中出现描述内容的可能，但不能完全杜绝。<br>推荐使用中文。最多可传256个 utf-8 字符。</p>
                     * @param _negativePrompt <p>反向文本描述。<br>用于一定程度上从反面引导模型生成的走向，减少生成结果中出现描述内容的可能，但不能完全杜绝。<br>推荐使用中文。最多可传256个 utf-8 字符。</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取<p>绘画风格。<br>请在  <a href="https://cloud.tencent.com/document/product/1668/86250">图像风格化风格列表</a> 中选择期望的风格，传入风格编号。<br>推荐使用且只使用一种风格。不传默认使用201（日系动漫风格）。</p>
                     * @return Styles <p>绘画风格。<br>请在  <a href="https://cloud.tencent.com/document/product/1668/86250">图像风格化风格列表</a> 中选择期望的风格，传入风格编号。<br>推荐使用且只使用一种风格。不传默认使用201（日系动漫风格）。</p>
                     * 
                     */
                    std::vector<std::string> GetStyles() const;

                    /**
                     * 设置<p>绘画风格。<br>请在  <a href="https://cloud.tencent.com/document/product/1668/86250">图像风格化风格列表</a> 中选择期望的风格，传入风格编号。<br>推荐使用且只使用一种风格。不传默认使用201（日系动漫风格）。</p>
                     * @param _styles <p>绘画风格。<br>请在  <a href="https://cloud.tencent.com/document/product/1668/86250">图像风格化风格列表</a> 中选择期望的风格，传入风格编号。<br>推荐使用且只使用一种风格。不传默认使用201（日系动漫风格）。</p>
                     * 
                     */
                    void SetStyles(const std::vector<std::string>& _styles);

                    /**
                     * 判断参数 Styles 是否已赋值
                     * @return Styles 是否已赋值
                     * 
                     */
                    bool StylesHasBeenSet() const;

                    /**
                     * 获取<p>生成图结果的配置，包括输出图片分辨率和尺寸等。<br>支持生成以下分辨率的图片：origin（与输入图分辨率一致，长边最高为2000，超出将做等比例缩小）、768:768（1:1）、768:1024（3:4）、1024:768（4:3）。<br>不传默认使用origin。<br>单位为 px。</p>
                     * @return ResultConfig <p>生成图结果的配置，包括输出图片分辨率和尺寸等。<br>支持生成以下分辨率的图片：origin（与输入图分辨率一致，长边最高为2000，超出将做等比例缩小）、768:768（1:1）、768:1024（3:4）、1024:768（4:3）。<br>不传默认使用origin。<br>单位为 px。</p>
                     * 
                     */
                    ResultConfig GetResultConfig() const;

                    /**
                     * 设置<p>生成图结果的配置，包括输出图片分辨率和尺寸等。<br>支持生成以下分辨率的图片：origin（与输入图分辨率一致，长边最高为2000，超出将做等比例缩小）、768:768（1:1）、768:1024（3:4）、1024:768（4:3）。<br>不传默认使用origin。<br>单位为 px。</p>
                     * @param _resultConfig <p>生成图结果的配置，包括输出图片分辨率和尺寸等。<br>支持生成以下分辨率的图片：origin（与输入图分辨率一致，长边最高为2000，超出将做等比例缩小）、768:768（1:1）、768:1024（3:4）、1024:768（4:3）。<br>不传默认使用origin。<br>单位为 px。</p>
                     * 
                     */
                    void SetResultConfig(const ResultConfig& _resultConfig);

                    /**
                     * 判断参数 ResultConfig 是否已赋值
                     * @return ResultConfig 是否已赋值
                     * 
                     */
                    bool ResultConfigHasBeenSet() const;

                    /**
                     * 获取<p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * @return LogoAdd <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     * @param _logoAdd <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
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
                     * 获取<p>生成自由度。<br>Strength 值越小，生成图和原图越接近，取值范围(0, 1]，不传使用模型内置的默认值。<br>推荐的取值范围为0.6 - 0.8。</p>
                     * @return Strength <p>生成自由度。<br>Strength 值越小，生成图和原图越接近，取值范围(0, 1]，不传使用模型内置的默认值。<br>推荐的取值范围为0.6 - 0.8。</p>
                     * 
                     */
                    double GetStrength() const;

                    /**
                     * 设置<p>生成自由度。<br>Strength 值越小，生成图和原图越接近，取值范围(0, 1]，不传使用模型内置的默认值。<br>推荐的取值范围为0.6 - 0.8。</p>
                     * @param _strength <p>生成自由度。<br>Strength 值越小，生成图和原图越接近，取值范围(0, 1]，不传使用模型内置的默认值。<br>推荐的取值范围为0.6 - 0.8。</p>
                     * 
                     */
                    void SetStrength(const double& _strength);

                    /**
                     * 判断参数 Strength 是否已赋值
                     * @return Strength 是否已赋值
                     * 
                     */
                    bool StrengthHasBeenSet() const;

                    /**
                     * 获取<p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。</p>
                     * @return RspImgType <p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。</p>
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置<p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。</p>
                     * @param _rspImgType <p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。</p>
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                    /**
                     * 获取<p>画质增强开关，默认关闭。<br>1：开启<br>0：关闭<br>开启后将增强图像的画质清晰度，生成耗时有所增加。</p>
                     * @return EnhanceImage <p>画质增强开关，默认关闭。<br>1：开启<br>0：关闭<br>开启后将增强图像的画质清晰度，生成耗时有所增加。</p>
                     * 
                     */
                    int64_t GetEnhanceImage() const;

                    /**
                     * 设置<p>画质增强开关，默认关闭。<br>1：开启<br>0：关闭<br>开启后将增强图像的画质清晰度，生成耗时有所增加。</p>
                     * @param _enhanceImage <p>画质增强开关，默认关闭。<br>1：开启<br>0：关闭<br>开启后将增强图像的画质清晰度，生成耗时有所增加。</p>
                     * 
                     */
                    void SetEnhanceImage(const int64_t& _enhanceImage);

                    /**
                     * 判断参数 EnhanceImage 是否已赋值
                     * @return EnhanceImage 是否已赋值
                     * 
                     */
                    bool EnhanceImageHasBeenSet() const;

                    /**
                     * 获取<p>细节优化的面部数量上限，支持0 ~ 6，默认为0。<br>若上传大于0的值，将以此为上限对每张图片中面积占比较小的面部进行细节修复，生成耗时根据实际优化的面部个数有所增加。</p>
                     * @return RestoreFace <p>细节优化的面部数量上限，支持0 ~ 6，默认为0。<br>若上传大于0的值，将以此为上限对每张图片中面积占比较小的面部进行细节修复，生成耗时根据实际优化的面部个数有所增加。</p>
                     * 
                     */
                    int64_t GetRestoreFace() const;

                    /**
                     * 设置<p>细节优化的面部数量上限，支持0 ~ 6，默认为0。<br>若上传大于0的值，将以此为上限对每张图片中面积占比较小的面部进行细节修复，生成耗时根据实际优化的面部个数有所增加。</p>
                     * @param _restoreFace <p>细节优化的面部数量上限，支持0 ~ 6，默认为0。<br>若上传大于0的值，将以此为上限对每张图片中面积占比较小的面部进行细节修复，生成耗时根据实际优化的面部个数有所增加。</p>
                     * 
                     */
                    void SetRestoreFace(const int64_t& _restoreFace);

                    /**
                     * 判断参数 RestoreFace 是否已赋值
                     * @return RestoreFace 是否已赋值
                     * 
                     */
                    bool RestoreFaceHasBeenSet() const;

                private:

                    /**
                     * <p>输入图 Base64 数据。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     */
                    std::string m_inputImage;
                    bool m_inputImageHasBeenSet;

                    /**
                     * <p>输入图 Url。<br>算法将根据输入的图片，结合文本描述智能生成与之相关的图像。<br>Base64 和 Url 必须提供一个，如果都提供以 Url 为准。<br>图片限制：单边分辨率小于5000px且大于50px，转成 Base64 字符串后小于 8MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * <p>文本描述。<br>用于在输入图的基础上引导生成图效果，增加生成结果中出现描述内容的可能。<br>推荐使用中文。最多支持256个 utf-8 字符。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>反向文本描述。<br>用于一定程度上从反面引导模型生成的走向，减少生成结果中出现描述内容的可能，但不能完全杜绝。<br>推荐使用中文。最多可传256个 utf-8 字符。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>绘画风格。<br>请在  <a href="https://cloud.tencent.com/document/product/1668/86250">图像风格化风格列表</a> 中选择期望的风格，传入风格编号。<br>推荐使用且只使用一种风格。不传默认使用201（日系动漫风格）。</p>
                     */
                    std::vector<std::string> m_styles;
                    bool m_stylesHasBeenSet;

                    /**
                     * <p>生成图结果的配置，包括输出图片分辨率和尺寸等。<br>支持生成以下分辨率的图片：origin（与输入图分辨率一致，长边最高为2000，超出将做等比例缩小）、768:768（1:1）、768:1024（3:4）、1024:768（4:3）。<br>不传默认使用origin。<br>单位为 px。</p>
                     */
                    ResultConfig m_resultConfig;
                    bool m_resultConfigHasBeenSet;

                    /**
                     * <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * <p>生成自由度。<br>Strength 值越小，生成图和原图越接近，取值范围(0, 1]，不传使用模型内置的默认值。<br>推荐的取值范围为0.6 - 0.8。</p>
                     */
                    double m_strength;
                    bool m_strengthHasBeenSet;

                    /**
                     * <p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。</p>
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * <p>画质增强开关，默认关闭。<br>1：开启<br>0：关闭<br>开启后将增强图像的画质清晰度，生成耗时有所增加。</p>
                     */
                    int64_t m_enhanceImage;
                    bool m_enhanceImageHasBeenSet;

                    /**
                     * <p>细节优化的面部数量上限，支持0 ~ 6，默认为0。<br>若上传大于0的值，将以此为上限对每张图片中面积占比较小的面部进行细节修复，生成耗时根据实际优化的面部个数有所增加。</p>
                     */
                    int64_t m_restoreFace;
                    bool m_restoreFaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGEREQUEST_H_
