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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_GETMULTIMODALEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_GETMULTIMODALEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * GetMultiModalEmbedding请求参数结构体
                */
                class GetMultiModalEmbeddingRequest : public AbstractModel
                {
                public:
                    GetMultiModalEmbeddingRequest();
                    ~GetMultiModalEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型名称，支持WeCLIPv2-Base和WeCLIPv2-Large
                     * @return ModelName 模型名称，支持WeCLIPv2-Base和WeCLIPv2-Large
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称，支持WeCLIPv2-Base和WeCLIPv2-Large
                     * @param _modelName 模型名称，支持WeCLIPv2-Base和WeCLIPv2-Large
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
                     * 获取需进行向量化的文本集，一次输入限10条，单条文本长度限72
                     * @return Texts 需进行向量化的文本集，一次输入限10条，单条文本长度限72
                     * 
                     */
                    std::vector<std::string> GetTexts() const;

                    /**
                     * 设置需进行向量化的文本集，一次输入限10条，单条文本长度限72
                     * @param _texts 需进行向量化的文本集，一次输入限10条，单条文本长度限72
                     * 
                     */
                    void SetTexts(const std::vector<std::string>& _texts);

                    /**
                     * 判断参数 Texts 是否已赋值
                     * @return Texts 是否已赋值
                     * 
                     */
                    bool TextsHasBeenSet() const;

                    /**
                     * 获取输入图片，base64编码格式，一次输入限制8个，单张图片限制1M
                     * @return ImageData 输入图片，base64编码格式，一次输入限制8个，单张图片限制1M
                     * 
                     */
                    std::vector<std::string> GetImageData() const;

                    /**
                     * 设置输入图片，base64编码格式，一次输入限制8个，单张图片限制1M
                     * @param _imageData 输入图片，base64编码格式，一次输入限制8个，单张图片限制1M
                     * 
                     */
                    void SetImageData(const std::vector<std::string>& _imageData);

                    /**
                     * 判断参数 ImageData 是否已赋值
                     * @return ImageData 是否已赋值
                     * 
                     */
                    bool ImageDataHasBeenSet() const;

                    /**
                     * 获取输入图片url，一次输入限8个，推荐cos地址，速度更快
                     * @return ImageUrl 输入图片url，一次输入限8个，推荐cos地址，速度更快
                     * 
                     */
                    std::vector<std::string> GetImageUrl() const;

                    /**
                     * 设置输入图片url，一次输入限8个，推荐cos地址，速度更快
                     * @param _imageUrl 输入图片url，一次输入限8个，推荐cos地址，速度更快
                     * 
                     */
                    void SetImageUrl(const std::vector<std::string>& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 模型名称，支持WeCLIPv2-Base和WeCLIPv2-Large
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 需进行向量化的文本集，一次输入限10条，单条文本长度限72
                     */
                    std::vector<std::string> m_texts;
                    bool m_textsHasBeenSet;

                    /**
                     * 输入图片，base64编码格式，一次输入限制8个，单张图片限制1M
                     */
                    std::vector<std::string> m_imageData;
                    bool m_imageDataHasBeenSet;

                    /**
                     * 输入图片url，一次输入限8个，推荐cos地址，速度更快
                     */
                    std::vector<std::string> m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_GETMULTIMODALEMBEDDINGREQUEST_H_
