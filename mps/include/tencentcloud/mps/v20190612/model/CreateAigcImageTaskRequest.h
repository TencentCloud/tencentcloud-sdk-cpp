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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AigcImageInfo.h>
#include <tencentcloud/mps/v20190612/model/AigcImageExtraParam.h>
#include <tencentcloud/mps/v20190612/model/AigcStoreCosParam.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAigcImageTask请求参数结构体
                */
                class CreateAigcImageTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcImageTaskRequest();
                    ~CreateAigcImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称。<br>当前支持的模型列表：<br>Hunyuan,<br>GEM，<br>Qwen。</p>
                     * @return ModelName <p>模型名称。<br>当前支持的模型列表：<br>Hunyuan,<br>GEM，<br>Qwen。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。<br>当前支持的模型列表：<br>Hunyuan,<br>GEM，<br>Qwen。</p>
                     * @param _modelName <p>模型名称。<br>当前支持的模型列表：<br>Hunyuan,<br>GEM，<br>Qwen。</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>GEM， 可选[2.5,3.0]。</li></ol>
                     * @return ModelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>GEM， 可选[2.5,3.0]。</li></ol>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>GEM， 可选[2.5,3.0]。</li></ol>
                     * @param _modelVersion <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>GEM， 可选[2.5,3.0]。</li></ol>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。</p>
                     * @return Prompt <p>生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。</p>
                     * @param _prompt <p>生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。</p>
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
                     * 获取<p>用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。</p>
                     * @return NegativePrompt <p>用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。</p>
                     * @param _negativePrompt <p>用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。</p>
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
                     * 获取<p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * @return EnhancePrompt <p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置<p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * @param _enhancePrompt <p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     * 
                     */
                    void SetEnhancePrompt(const bool& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>用于传入参考的资源图片信息，默认支持传入一张图片。</p><p>支持多图输入的模型：</p><ol><li>GEM，可支持最多3张图片输入作为资源图。</li></ol><p>注意：</p><ol><li>推荐图片小于7M，各模型限制不同。</li><li>图片格式支持：jpeg, png, webp。</li></ol>
                     * @return ImageInfos <p>用于传入参考的资源图片信息，默认支持传入一张图片。</p><p>支持多图输入的模型：</p><ol><li>GEM，可支持最多3张图片输入作为资源图。</li></ol><p>注意：</p><ol><li>推荐图片小于7M，各模型限制不同。</li><li>图片格式支持：jpeg, png, webp。</li></ol>
                     * 
                     */
                    std::vector<AigcImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>用于传入参考的资源图片信息，默认支持传入一张图片。</p><p>支持多图输入的模型：</p><ol><li>GEM，可支持最多3张图片输入作为资源图。</li></ol><p>注意：</p><ol><li>推荐图片小于7M，各模型限制不同。</li><li>图片格式支持：jpeg, png, webp。</li></ol>
                     * @param _imageInfos <p>用于传入参考的资源图片信息，默认支持传入一张图片。</p><p>支持多图输入的模型：</p><ol><li>GEM，可支持最多3张图片输入作为资源图。</li></ol><p>注意：</p><ol><li>推荐图片小于7M，各模型限制不同。</li><li>图片格式支持：jpeg, png, webp。</li></ol>
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>用于传入模型要求的额外参数。</p>
                     * @return ExtraParameters <p>用于传入模型要求的额外参数。</p>
                     * 
                     */
                    AigcImageExtraParam GetExtraParameters() const;

                    /**
                     * 设置<p>用于传入模型要求的额外参数。</p>
                     * @param _extraParameters <p>用于传入模型要求的额外参数。</p>
                     * 
                     */
                    void SetExtraParameters(const AigcImageExtraParam& _extraParameters);

                    /**
                     * 判断参数 ExtraParameters 是否已赋值
                     * @return ExtraParameters 是否已赋值
                     * 
                     */
                    bool ExtraParametersHasBeenSet() const;

                    /**
                     * 获取<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。 示例： {"size":"2048x2048"}</p>
                     * @return AdditionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。 示例： {"size":"2048x2048"}</p>
                     * 
                     */
                    std::string GetAdditionalParameters() const;

                    /**
                     * 设置<p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。 示例： {"size":"2048x2048"}</p>
                     * @param _additionalParameters <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。 示例： {"size":"2048x2048"}</p>
                     * 
                     */
                    void SetAdditionalParameters(const std::string& _additionalParameters);

                    /**
                     * 判断参数 AdditionalParameters 是否已赋值
                     * @return AdditionalParameters 是否已赋值
                     * 
                     */
                    bool AdditionalParametersHasBeenSet() const;

                    /**
                     * 获取<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @return StoreCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @param _storeCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    void SetStoreCosParam(const AigcStoreCosParam& _storeCosParam);

                    /**
                     * 判断参数 StoreCosParam 是否已赋值
                     * @return StoreCosParam 是否已赋值
                     * 
                     */
                    bool StoreCosParamHasBeenSet() const;

                    /**
                     * 获取<p>接口操作者名称。</p>
                     * @return Operator <p>接口操作者名称。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>接口操作者名称。</p>
                     * @param _operator <p>接口操作者名称。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称。<br>当前支持的模型列表：<br>Hunyuan,<br>GEM，<br>Qwen。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。</p><ol><li>GEM， 可选[2.5,3.0]。</li></ol>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。</p>
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>用于传入参考的资源图片信息，默认支持传入一张图片。</p><p>支持多图输入的模型：</p><ol><li>GEM，可支持最多3张图片输入作为资源图。</li></ol><p>注意：</p><ol><li>推荐图片小于7M，各模型限制不同。</li><li>图片格式支持：jpeg, png, webp。</li></ol>
                     */
                    std::vector<AigcImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>用于传入模型要求的额外参数。</p>
                     */
                    AigcImageExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * <p>用于传入一些模型需要的特殊场景参数，Json格式序列化成字符串。 示例： {"size":"2048x2048"}</p>
                     */
                    std::string m_additionalParameters;
                    bool m_additionalParametersHasBeenSet;

                    /**
                     * <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * <p>接口操作者名称。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
