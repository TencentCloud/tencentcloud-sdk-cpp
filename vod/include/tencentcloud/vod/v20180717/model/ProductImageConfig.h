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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI 生商品图参数配置
                */
                class ProductImageConfig : public AbstractModel
                {
                public:
                    ProductImageConfig();
                    ~ProductImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成图片背景的提示词。如果此字段缺省则内部会自行生成灵感。
                     * @return Prompt 生成图片背景的提示词。如果此字段缺省则内部会自行生成灵感。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置生成图片背景的提示词。如果此字段缺省则内部会自行生成灵感。
                     * @param _prompt 生成图片背景的提示词。如果此字段缺省则内部会自行生成灵感。
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
                     * 获取要阻止模型生成图片的提示词。
                     * @return NegativePrompt 要阻止模型生成图片的提示词。
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置要阻止模型生成图片的提示词。
                     * @param _negativePrompt 要阻止模型生成图片的提示词。
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
                     * 获取关于产品的描述，详细的描述，有助于生成更符合要求的图片。
                     * @return ProductDesc 关于产品的描述，详细的描述，有助于生成更符合要求的图片。
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置关于产品的描述，详细的描述，有助于生成更符合要求的图片。
                     * @param _productDesc 关于产品的描述，详细的描述，有助于生成更符合要求的图片。
                     * 
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     * 
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取特殊要求。如有特殊要求，可通过该字段传入。
                     * @return MoreRequirement 特殊要求。如有特殊要求，可通过该字段传入。
                     * 
                     */
                    std::string GetMoreRequirement() const;

                    /**
                     * 设置特殊要求。如有特殊要求，可通过该字段传入。
                     * @param _moreRequirement 特殊要求。如有特殊要求，可通过该字段传入。
                     * 
                     */
                    void SetMoreRequirement(const std::string& _moreRequirement);

                    /**
                     * 判断参数 MoreRequirement 是否已赋值
                     * @return MoreRequirement 是否已赋值
                     * 
                     */
                    bool MoreRequirementHasBeenSet() const;

                    /**
                     * 获取期望生成的图片张数。不传默认值为1，最大合法值为10。
                     * @return OutputImageCount 期望生成的图片张数。不传默认值为1，最大合法值为10。
                     * 
                     */
                    uint64_t GetOutputImageCount() const;

                    /**
                     * 设置期望生成的图片张数。不传默认值为1，最大合法值为10。
                     * @param _outputImageCount 期望生成的图片张数。不传默认值为1，最大合法值为10。
                     * 
                     */
                    void SetOutputImageCount(const uint64_t& _outputImageCount);

                    /**
                     * 判断参数 OutputImageCount 是否已赋值
                     * @return OutputImageCount 是否已赋值
                     * 
                     */
                    bool OutputImageCountHasBeenSet() const;

                private:

                    /**
                     * 生成图片背景的提示词。如果此字段缺省则内部会自行生成灵感。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 要阻止模型生成图片的提示词。
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 关于产品的描述，详细的描述，有助于生成更符合要求的图片。
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 特殊要求。如有特殊要求，可通过该字段传入。
                     */
                    std::string m_moreRequirement;
                    bool m_moreRequirementHasBeenSet;

                    /**
                     * 期望生成的图片张数。不传默认值为1，最大合法值为10。
                     */
                    uint64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_
