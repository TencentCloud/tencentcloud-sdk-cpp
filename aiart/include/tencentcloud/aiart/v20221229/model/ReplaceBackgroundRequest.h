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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_REPLACEBACKGROUNDREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_REPLACEBACKGROUNDREQUEST_H_

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
                * ReplaceBackground请求参数结构体
                */
                class ReplaceBackgroundRequest : public AbstractModel
                {
                public:
                    ReplaceBackgroundRequest();
                    ~ReplaceBackgroundRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>商品原图 Url。<br>图片限制：单边分辨率小于4000px，长宽比在2:5 ~ 5:2之间，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @return ProductUrl <p>商品原图 Url。<br>图片限制：单边分辨率小于4000px，长宽比在2:5 ~ 5:2之间，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    std::string GetProductUrl() const;

                    /**
                     * 设置<p>商品原图 Url。<br>图片限制：单边分辨率小于4000px，长宽比在2:5 ~ 5:2之间，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * @param _productUrl <p>商品原图 Url。<br>图片限制：单边分辨率小于4000px，长宽比在2:5 ~ 5:2之间，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     * 
                     */
                    void SetProductUrl(const std::string& _productUrl);

                    /**
                     * 判断参数 ProductUrl 是否已赋值
                     * @return ProductUrl 是否已赋值
                     * 
                     */
                    bool ProductUrlHasBeenSet() const;

                    /**
                     * 获取<p>对新背景的文本描述。<br>最多支持256个 utf-8 字符，支持中、英文。<br>如果 Prompt = &quot;BackgroundTemplate&quot; 代表启用背景模板，需要在参数 BackgroundTemplate 中指定一个背景名称。</p>
                     * @return Prompt <p>对新背景的文本描述。<br>最多支持256个 utf-8 字符，支持中、英文。<br>如果 Prompt = &quot;BackgroundTemplate&quot; 代表启用背景模板，需要在参数 BackgroundTemplate 中指定一个背景名称。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>对新背景的文本描述。<br>最多支持256个 utf-8 字符，支持中、英文。<br>如果 Prompt = &quot;BackgroundTemplate&quot; 代表启用背景模板，需要在参数 BackgroundTemplate 中指定一个背景名称。</p>
                     * @param _prompt <p>对新背景的文本描述。<br>最多支持256个 utf-8 字符，支持中、英文。<br>如果 Prompt = &quot;BackgroundTemplate&quot; 代表启用背景模板，需要在参数 BackgroundTemplate 中指定一个背景名称。</p>
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
                     * 获取<p>反向提示词。<br>最多支持256个 utf-8 字符，支持中、英文。</p>
                     * @return NegativePrompt <p>反向提示词。<br>最多支持256个 utf-8 字符，支持中、英文。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>反向提示词。<br>最多支持256个 utf-8 字符，支持中、英文。</p>
                     * @param _negativePrompt <p>反向提示词。<br>最多支持256个 utf-8 字符，支持中、英文。</p>
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
                     * 获取<p>商品图中的商品主体名称。<br>最多支持50个 utf-8 字符，支持中、英文。<br>建议说明商品主体，否则影响生成效果。</p>
                     * @return Product <p>商品图中的商品主体名称。<br>最多支持50个 utf-8 字符，支持中、英文。<br>建议说明商品主体，否则影响生成效果。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>商品图中的商品主体名称。<br>最多支持50个 utf-8 字符，支持中、英文。<br>建议说明商品主体，否则影响生成效果。</p>
                     * @param _product <p>商品图中的商品主体名称。<br>最多支持50个 utf-8 字符，支持中、英文。<br>建议说明商品主体，否则影响生成效果。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>背景模板。<br>仅当 Prompt = &quot;BackgroundTemplate&quot; 时生效，可支持的模板详见 <a href="https://cloud.tencent.com/document/product/1668/115391">商品背景模板列表</a> ，请传入字段“背景名称”中的值。</p>
                     * @return BackgroundTemplate <p>背景模板。<br>仅当 Prompt = &quot;BackgroundTemplate&quot; 时生效，可支持的模板详见 <a href="https://cloud.tencent.com/document/product/1668/115391">商品背景模板列表</a> ，请传入字段“背景名称”中的值。</p>
                     * 
                     */
                    std::string GetBackgroundTemplate() const;

                    /**
                     * 设置<p>背景模板。<br>仅当 Prompt = &quot;BackgroundTemplate&quot; 时生效，可支持的模板详见 <a href="https://cloud.tencent.com/document/product/1668/115391">商品背景模板列表</a> ，请传入字段“背景名称”中的值。</p>
                     * @param _backgroundTemplate <p>背景模板。<br>仅当 Prompt = &quot;BackgroundTemplate&quot; 时生效，可支持的模板详见 <a href="https://cloud.tencent.com/document/product/1668/115391">商品背景模板列表</a> ，请传入字段“背景名称”中的值。</p>
                     * 
                     */
                    void SetBackgroundTemplate(const std::string& _backgroundTemplate);

                    /**
                     * 判断参数 BackgroundTemplate 是否已赋值
                     * @return BackgroundTemplate 是否已赋值
                     * 
                     */
                    bool BackgroundTemplateHasBeenSet() const;

                    /**
                     * 获取<p>商品 Mask 图 Url，要求背景透明，保留商品主体。<br>如果不传，将自动使用内置的商品分割算法得到 Mask。<br>支持自定义上传 Mask，如果该参数不为空，则以实际上传的数据为准。<br>图片限制：Mask 图必须和商品原图分辨率一致，转成 Base64 字符串后小于 6MB，格式仅支持 png。</p>
                     * @return MaskUrl <p>商品 Mask 图 Url，要求背景透明，保留商品主体。<br>如果不传，将自动使用内置的商品分割算法得到 Mask。<br>支持自定义上传 Mask，如果该参数不为空，则以实际上传的数据为准。<br>图片限制：Mask 图必须和商品原图分辨率一致，转成 Base64 字符串后小于 6MB，格式仅支持 png。</p>
                     * 
                     */
                    std::string GetMaskUrl() const;

                    /**
                     * 设置<p>商品 Mask 图 Url，要求背景透明，保留商品主体。<br>如果不传，将自动使用内置的商品分割算法得到 Mask。<br>支持自定义上传 Mask，如果该参数不为空，则以实际上传的数据为准。<br>图片限制：Mask 图必须和商品原图分辨率一致，转成 Base64 字符串后小于 6MB，格式仅支持 png。</p>
                     * @param _maskUrl <p>商品 Mask 图 Url，要求背景透明，保留商品主体。<br>如果不传，将自动使用内置的商品分割算法得到 Mask。<br>支持自定义上传 Mask，如果该参数不为空，则以实际上传的数据为准。<br>图片限制：Mask 图必须和商品原图分辨率一致，转成 Base64 字符串后小于 6MB，格式仅支持 png。</p>
                     * 
                     */
                    void SetMaskUrl(const std::string& _maskUrl);

                    /**
                     * 判断参数 MaskUrl 是否已赋值
                     * @return MaskUrl 是否已赋值
                     * 
                     */
                    bool MaskUrlHasBeenSet() const;

                    /**
                     * 获取<p>替换背景后生成的商品图分辨率。<br>支持生成单边分辨率大于500px且小于4000px、长宽比在2:5 ~ 5:2之间的图片，不传默认生成1280:1280。<br>建议图片比例为1:1、9:16、16:9，生成效果更佳，使用其他比例的生成效果可能不如建议比例。</p>
                     * @return Resolution <p>替换背景后生成的商品图分辨率。<br>支持生成单边分辨率大于500px且小于4000px、长宽比在2:5 ~ 5:2之间的图片，不传默认生成1280:1280。<br>建议图片比例为1:1、9:16、16:9，生成效果更佳，使用其他比例的生成效果可能不如建议比例。</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>替换背景后生成的商品图分辨率。<br>支持生成单边分辨率大于500px且小于4000px、长宽比在2:5 ~ 5:2之间的图片，不传默认生成1280:1280。<br>建议图片比例为1:1、9:16、16:9，生成效果更佳，使用其他比例的生成效果可能不如建议比例。</p>
                     * @param _resolution <p>替换背景后生成的商品图分辨率。<br>支持生成单边分辨率大于500px且小于4000px、长宽比在2:5 ~ 5:2之间的图片，不传默认生成1280:1280。<br>建议图片比例为1:1、9:16、16:9，生成效果更佳，使用其他比例的生成效果可能不如建议比例。</p>
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
                     * 获取<p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     * @return LogoAdd <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     * @param _logoAdd <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
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
                     * 获取<p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。<br>示例值：{&quot;LogoUrl&quot;: &quot;https://cos.ap-guangzhou.myqcloud.com/logo.jpg&quot;, &quot;LogoRect&quot;: {&quot;X&quot;: 10, &quot;Y&quot;: 10, &quot;Width&quot;: 20, &quot;Height&quot;: 20}}</p>
                     * @return LogoParam <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。<br>示例值：{&quot;LogoUrl&quot;: &quot;https://cos.ap-guangzhou.myqcloud.com/logo.jpg&quot;, &quot;LogoRect&quot;: {&quot;X&quot;: 10, &quot;Y&quot;: 10, &quot;Width&quot;: 20, &quot;Height&quot;: 20}}</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。<br>示例值：{&quot;LogoUrl&quot;: &quot;https://cos.ap-guangzhou.myqcloud.com/logo.jpg&quot;, &quot;LogoRect&quot;: {&quot;X&quot;: 10, &quot;Y&quot;: 10, &quot;Width&quot;: 20, &quot;Height&quot;: 20}}</p>
                     * @param _logoParam <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。<br>示例值：{&quot;LogoUrl&quot;: &quot;https://cos.ap-guangzhou.myqcloud.com/logo.jpg&quot;, &quot;LogoRect&quot;: {&quot;X&quot;: 10, &quot;Y&quot;: 10, &quot;Width&quot;: 20, &quot;Height&quot;: 20}}</p>
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
                     * 获取<p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。<br>生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。</p>
                     * @return RspImgType <p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。<br>生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。</p>
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置<p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。<br>生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。</p>
                     * @param _rspImgType <p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。<br>生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。</p>
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                private:

                    /**
                     * <p>商品原图 Url。<br>图片限制：单边分辨率小于4000px，长宽比在2:5 ~ 5:2之间，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。</p>
                     */
                    std::string m_productUrl;
                    bool m_productUrlHasBeenSet;

                    /**
                     * <p>对新背景的文本描述。<br>最多支持256个 utf-8 字符，支持中、英文。<br>如果 Prompt = &quot;BackgroundTemplate&quot; 代表启用背景模板，需要在参数 BackgroundTemplate 中指定一个背景名称。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>反向提示词。<br>最多支持256个 utf-8 字符，支持中、英文。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>商品图中的商品主体名称。<br>最多支持50个 utf-8 字符，支持中、英文。<br>建议说明商品主体，否则影响生成效果。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>背景模板。<br>仅当 Prompt = &quot;BackgroundTemplate&quot; 时生效，可支持的模板详见 <a href="https://cloud.tencent.com/document/product/1668/115391">商品背景模板列表</a> ，请传入字段“背景名称”中的值。</p>
                     */
                    std::string m_backgroundTemplate;
                    bool m_backgroundTemplateHasBeenSet;

                    /**
                     * <p>商品 Mask 图 Url，要求背景透明，保留商品主体。<br>如果不传，将自动使用内置的商品分割算法得到 Mask。<br>支持自定义上传 Mask，如果该参数不为空，则以实际上传的数据为准。<br>图片限制：Mask 图必须和商品原图分辨率一致，转成 Base64 字符串后小于 6MB，格式仅支持 png。</p>
                     */
                    std::string m_maskUrl;
                    bool m_maskUrlHasBeenSet;

                    /**
                     * <p>替换背景后生成的商品图分辨率。<br>支持生成单边分辨率大于500px且小于4000px、长宽比在2:5 ~ 5:2之间的图片，不传默认生成1280:1280。<br>建议图片比例为1:1、9:16、16:9，生成效果更佳，使用其他比例的生成效果可能不如建议比例。</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br>0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。<br>示例值：{&quot;LogoUrl&quot;: &quot;https://cos.ap-guangzhou.myqcloud.com/logo.jpg&quot;, &quot;LogoRect&quot;: {&quot;X&quot;: 10, &quot;Y&quot;: 10, &quot;Width&quot;: 20, &quot;Height&quot;: 20}}</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * <p>返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。<br>生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。</p>
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_REPLACEBACKGROUNDREQUEST_H_
