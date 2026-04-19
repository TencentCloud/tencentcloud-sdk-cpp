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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITDRAWPORTRAITJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITDRAWPORTRAITJOBREQUEST_H_

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
                * SubmitDrawPortraitJob请求参数结构体
                */
                class SubmitDrawPortraitJobRequest : public AbstractModel
                {
                public:
                    SubmitDrawPortraitJobRequest();
                    ~SubmitDrawPortraitJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>写真模型 ID。</p>
                     * @return ModelId <p>写真模型 ID。</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>写真模型 ID。</p>
                     * @param _modelId <p>写真模型 ID。</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>写真风格模板。<br>请在<a href="https://cloud.tencent.com/document/product/1668/105740"> AI 写真风格列表</a> 中选择期望的风格，传入风格编号。</p>
                     * @return StyleId <p>写真风格模板。<br>请在<a href="https://cloud.tencent.com/document/product/1668/105740"> AI 写真风格列表</a> 中选择期望的风格，传入风格编号。</p>
                     * 
                     */
                    std::string GetStyleId() const;

                    /**
                     * 设置<p>写真风格模板。<br>请在<a href="https://cloud.tencent.com/document/product/1668/105740"> AI 写真风格列表</a> 中选择期望的风格，传入风格编号。</p>
                     * @param _styleId <p>写真风格模板。<br>请在<a href="https://cloud.tencent.com/document/product/1668/105740"> AI 写真风格列表</a> 中选择期望的风格，传入风格编号。</p>
                     * 
                     */
                    void SetStyleId(const std::string& _styleId);

                    /**
                     * 判断参数 StyleId 是否已赋值
                     * @return StyleId 是否已赋值
                     * 
                     */
                    bool StyleIdHasBeenSet() const;

                    /**
                     * 获取<p>本次生成的图片数量，取值范围[1,4]</p>
                     * @return ImageNum <p>本次生成的图片数量，取值范围[1,4]</p>
                     * 
                     */
                    int64_t GetImageNum() const;

                    /**
                     * 设置<p>本次生成的图片数量，取值范围[1,4]</p>
                     * @param _imageNum <p>本次生成的图片数量，取值范围[1,4]</p>
                     * 
                     */
                    void SetImageNum(const int64_t& _imageNum);

                    /**
                     * 判断参数 ImageNum 是否已赋值
                     * @return ImageNum 是否已赋值
                     * 
                     */
                    bool ImageNumHasBeenSet() const;

                    /**
                     * 获取<p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br> 0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     * @return LogoAdd <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br> 0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br> 0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     * @param _logoAdd <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br> 0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
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
                     * 获取<p>清晰度，单位为 px。<br>支持以下选项：<br>sd：基础版，分辨率512:640<br>hd：高清畅享版，分辨率1024:1280<br>hdpro：高清优享版，分辨率1024:1280（推荐）<br>uhd：超清版，分辨率2048:2560<br>不填默认为sd。</p>
                     * @return Definition <p>清晰度，单位为 px。<br>支持以下选项：<br>sd：基础版，分辨率512:640<br>hd：高清畅享版，分辨率1024:1280<br>hdpro：高清优享版，分辨率1024:1280（推荐）<br>uhd：超清版，分辨率2048:2560<br>不填默认为sd。</p>
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置<p>清晰度，单位为 px。<br>支持以下选项：<br>sd：基础版，分辨率512:640<br>hd：高清畅享版，分辨率1024:1280<br>hdpro：高清优享版，分辨率1024:1280（推荐）<br>uhd：超清版，分辨率2048:2560<br>不填默认为sd。</p>
                     * @param _definition <p>清晰度，单位为 px。<br>支持以下选项：<br>sd：基础版，分辨率512:640<br>hd：高清畅享版，分辨率1024:1280<br>hdpro：高清优享版，分辨率1024:1280（推荐）<br>uhd：超清版，分辨率2048:2560<br>不填默认为sd。</p>
                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * <p>写真模型 ID。</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>写真风格模板。<br>请在<a href="https://cloud.tencent.com/document/product/1668/105740"> AI 写真风格列表</a> 中选择期望的风格，传入风格编号。</p>
                     */
                    std::string m_styleId;
                    bool m_styleIdHasBeenSet;

                    /**
                     * <p>本次生成的图片数量，取值范围[1,4]</p>
                     */
                    int64_t m_imageNum;
                    bool m_imageNumHasBeenSet;

                    /**
                     * <p>为生成结果图添加标识的开关，默认为1。<br>1：添加标识。<br> 0：不添加标识。<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示结果图是 AI 生成的图片。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。<br>示例值：{&quot;LogoUrl&quot;: &quot;https://cos.ap-guangzhou.myqcloud.com/logo.jpg&quot;, &quot;LogoRect&quot;: {&quot;X&quot;: 10, &quot;Y&quot;: 10, &quot;Width&quot;: 20, &quot;Height&quot;: 20}}</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * <p>清晰度，单位为 px。<br>支持以下选项：<br>sd：基础版，分辨率512:640<br>hd：高清畅享版，分辨率1024:1280<br>hdpro：高清优享版，分辨率1024:1280（推荐）<br>uhd：超清版，分辨率2048:2560<br>不填默认为sd。</p>
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITDRAWPORTRAITJOBREQUEST_H_
