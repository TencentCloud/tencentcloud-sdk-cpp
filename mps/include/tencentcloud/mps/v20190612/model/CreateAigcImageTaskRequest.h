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
                     * 获取模型名称。
当前支持的模型列表：
Hunyuan,
GEM，
Jimeng，
Qwen。
                     * @return ModelName 模型名称。
当前支持的模型列表：
Hunyuan,
GEM，
Jimeng，
Qwen。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称。
当前支持的模型列表：
Hunyuan,
GEM，
Jimeng，
Qwen。
                     * @param _modelName 模型名称。
当前支持的模型列表：
Hunyuan,
GEM，
Jimeng，
Qwen。
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
                     * 获取指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。

1. GEM， 可选[2.5,3.0]。
2. Jimeng，可选[4.0]。
                     * @return ModelVersion 指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。

1. GEM， 可选[2.5,3.0]。
2. Jimeng，可选[4.0]。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。

1. GEM， 可选[2.5,3.0]。
2. Jimeng，可选[4.0]。
                     * @param _modelVersion 指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。

1. GEM， 可选[2.5,3.0]。
2. Jimeng，可选[4.0]。
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
                     * 获取生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。
                     * @return Prompt 生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。
                     * @param _prompt 生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。
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
                     * 获取用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。
                     * @return NegativePrompt 用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。
                     * @param _negativePrompt 用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。
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
                     * 获取默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     * @return EnhancePrompt 默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     * 
                     */
                    bool GetEnhancePrompt() const;

                    /**
                     * 设置默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     * @param _enhancePrompt 默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
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
                     * 获取用于传入参考的资源图片信息，默认支持传入一张图片。

支持多图输入的模型：
1. GEM，可支持最多3张图片输入作为资源图。

注意：
1. 推荐图片小于7M，各模型限制不同。
2. 图片格式支持：jpeg, png, webp。
                     * @return ImageInfos 用于传入参考的资源图片信息，默认支持传入一张图片。

支持多图输入的模型：
1. GEM，可支持最多3张图片输入作为资源图。

注意：
1. 推荐图片小于7M，各模型限制不同。
2. 图片格式支持：jpeg, png, webp。
                     * 
                     */
                    std::vector<AigcImageInfo> GetImageInfos() const;

                    /**
                     * 设置用于传入参考的资源图片信息，默认支持传入一张图片。

支持多图输入的模型：
1. GEM，可支持最多3张图片输入作为资源图。

注意：
1. 推荐图片小于7M，各模型限制不同。
2. 图片格式支持：jpeg, png, webp。
                     * @param _imageInfos 用于传入参考的资源图片信息，默认支持传入一张图片。

支持多图输入的模型：
1. GEM，可支持最多3张图片输入作为资源图。

注意：
1. 推荐图片小于7M，各模型限制不同。
2. 图片格式支持：jpeg, png, webp。
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
                     * 获取用于传入模型要求的额外参数。
                     * @return ExtraParameters 用于传入模型要求的额外参数。
                     * 
                     */
                    AigcImageExtraParam GetExtraParameters() const;

                    /**
                     * 设置用于传入模型要求的额外参数。
                     * @param _extraParameters 用于传入模型要求的额外参数。
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
                     * 获取文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     * @return StoreCosParam 文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     * 
                     */
                    AigcStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     * @param _storeCosParam 文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
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
                     * 获取接口操作者名称。
                     * @return Operator 接口操作者名称。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置接口操作者名称。
                     * @param _operator 接口操作者名称。
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
                     * 模型名称。
当前支持的模型列表：
Hunyuan,
GEM，
Jimeng，
Qwen。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 指定模型特定版本号。默认使用系统当前所支持的模型稳定版本。

1. GEM， 可选[2.5,3.0]。
2. Jimeng，可选[4.0]。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 生成图片的描述。(注：最大支持1000字符)。当未传入参考图片时，此参数必填。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 用于描述您想要阻止模型生成的内容。 注意：部分模型支持。 例如： 顶部照明、明亮的色彩 人物、动物 多辆汽车、风。
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 默认取值为False，模型会严格地遵循指令。如果需要更精细的prompt获得最佳效果，可将此参数设置为True，将自动优化传入的prompt，以提升生成质量。
                     */
                    bool m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 用于传入参考的资源图片信息，默认支持传入一张图片。

支持多图输入的模型：
1. GEM，可支持最多3张图片输入作为资源图。

注意：
1. 推荐图片小于7M，各模型限制不同。
2. 图片格式支持：jpeg, png, webp。
                     */
                    std::vector<AigcImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * 用于传入模型要求的额外参数。
                     */
                    AigcImageExtraParam m_extraParameters;
                    bool m_extraParametersHasBeenSet;

                    /**
                     * 文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。
                     */
                    AigcStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * 接口操作者名称。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
