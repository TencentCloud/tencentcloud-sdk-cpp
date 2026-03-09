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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITAIGCVIDEOJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITAIGCVIDEOJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitAigcVideoJob请求参数结构体
                */
                class SubmitAigcVideoJobRequest : public AbstractModel
                {
                public:
                    SubmitAigcVideoJobRequest();
                    ~SubmitAigcVideoJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称。</p><p>枚举值：</p><p>● Vidu；</p><p>● Kling：可灵；</p><p>● HY：混元；</p><p>● YT：优图；</p><p>示例值：Vidu</p>
                     * @return Vendor <p>模型名称。</p><p>枚举值：</p><p>● Vidu；</p><p>● Kling：可灵；</p><p>● HY：混元；</p><p>● YT：优图；</p><p>示例值：Vidu</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>模型名称。</p><p>枚举值：</p><p>● Vidu；</p><p>● Kling：可灵；</p><p>● HY：混元；</p><p>● YT：优图；</p><p>示例值：Vidu</p>
                     * @param _vendor <p>模型名称。</p><p>枚举值：</p><p>● Vidu；</p><p>● Kling：可灵；</p><p>● HY：混元；</p><p>● YT：优图；</p><p>示例值：Vidu</p>
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>模型版本。</p><p>枚举值：</p><p>● 当Vendor为Vidu时，可选值[q2, q2-pro, q2-turbo]</p><p>● 当Vendor为Kling时，可选值[v1.6, v2.0, v2.1, v2.5, , v2.6, O1]</p><p>● 当Vendor为HY时，默认值：[v1.5]</p><p>● 当Vendor为YT时，默认值：[v2.0]</p>
                     * @return Model <p>模型版本。</p><p>枚举值：</p><p>● 当Vendor为Vidu时，可选值[q2, q2-pro, q2-turbo]</p><p>● 当Vendor为Kling时，可选值[v1.6, v2.0, v2.1, v2.5, , v2.6, O1]</p><p>● 当Vendor为HY时，默认值：[v1.5]</p><p>● 当Vendor为YT时，默认值：[v2.0]</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型版本。</p><p>枚举值：</p><p>● 当Vendor为Vidu时，可选值[q2, q2-pro, q2-turbo]</p><p>● 当Vendor为Kling时，可选值[v1.6, v2.0, v2.1, v2.5, , v2.6, O1]</p><p>● 当Vendor为HY时，默认值：[v1.5]</p><p>● 当Vendor为YT时，默认值：[v2.0]</p>
                     * @param _model <p>模型版本。</p><p>枚举值：</p><p>● 当Vendor为Vidu时，可选值[q2, q2-pro, q2-turbo]</p><p>● 当Vendor为Kling时，可选值[v1.6, v2.0, v2.1, v2.5, , v2.6, O1]</p><p>● 当Vendor为HY时，默认值：[v1.5]</p><p>● 当Vendor为YT时，默认值：[v2.0]</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>模型参数Json-Format字符串<br> <a href="https://cloud.tencent.com/document/product/1616/128996">模型参数列表</a></p>
                     * @return ModelParam <p>模型参数Json-Format字符串<br> <a href="https://cloud.tencent.com/document/product/1616/128996">模型参数列表</a></p>
                     * 
                     */
                    std::string GetModelParam() const;

                    /**
                     * 设置<p>模型参数Json-Format字符串<br> <a href="https://cloud.tencent.com/document/product/1616/128996">模型参数列表</a></p>
                     * @param _modelParam <p>模型参数Json-Format字符串<br> <a href="https://cloud.tencent.com/document/product/1616/128996">模型参数列表</a></p>
                     * 
                     */
                    void SetModelParam(const std::string& _modelParam);

                    /**
                     * 判断参数 ModelParam 是否已赋值
                     * @return ModelParam 是否已赋值
                     * 
                     */
                    bool ModelParamHasBeenSet() const;

                    /**
                     * 获取<p>正向文本提示词。不能超过2000个字符</p><p>示例值：一只小猫在草地奔跑</p>
                     * @return Prompt <p>正向文本提示词。不能超过2000个字符</p><p>示例值：一只小猫在草地奔跑</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>正向文本提示词。不能超过2000个字符</p><p>示例值：一只小猫在草地奔跑</p>
                     * @param _prompt <p>正向文本提示词。不能超过2000个字符</p><p>示例值：一只小猫在草地奔跑</p>
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
                     * 获取<p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。<br>示例值：1</p>
                     * @return LogoAdd <p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。<br>示例值：1</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。<br>示例值：1</p>
                     * @param _logoAdd <p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。<br>示例值：1</p>
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

                private:

                    /**
                     * <p>模型名称。</p><p>枚举值：</p><p>● Vidu；</p><p>● Kling：可灵；</p><p>● HY：混元；</p><p>● YT：优图；</p><p>示例值：Vidu</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>模型版本。</p><p>枚举值：</p><p>● 当Vendor为Vidu时，可选值[q2, q2-pro, q2-turbo]</p><p>● 当Vendor为Kling时，可选值[v1.6, v2.0, v2.1, v2.5, , v2.6, O1]</p><p>● 当Vendor为HY时，默认值：[v1.5]</p><p>● 当Vendor为YT时，默认值：[v2.0]</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>模型参数Json-Format字符串<br> <a href="https://cloud.tencent.com/document/product/1616/128996">模型参数列表</a></p>
                     */
                    std::string m_modelParam;
                    bool m_modelParamHasBeenSet;

                    /**
                     * <p>正向文本提示词。不能超过2000个字符</p><p>示例值：一只小猫在草地奔跑</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>为生成结果图添加显式水印标识的开关，默认为1。<br>1：添加。<br>0：不添加。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。<br>示例值：1</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITAIGCVIDEOJOBREQUEST_H_
