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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERATEVLEMBEDDINGRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERATEVLEMBEDDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/EmbeddingObject.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GenerateVLEmbedding返回参数结构体
                */
                class GenerateVLEmbeddingResponse : public AbstractModel
                {
                public:
                    GenerateVLEmbeddingResponse();
                    ~GenerateVLEmbeddingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>向量化结果列表。单条图文混合输入可能返回多个向量。</p>
                     * @return Data <p>向量化结果列表。单条图文混合输入可能返回多个向量。</p>
                     * 
                     */
                    std::vector<EmbeddingObject> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>输入 Token 数，多模态场景含图像、视频折算的 Token。</p>
                     * @return InputTokens <p>输入 Token 数，多模态场景含图像、视频折算的 Token。</p>
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>总 Token 数。</p>
                     * @return TotalTokens <p>总 Token 数。</p>
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * <p>向量化结果列表。单条图文混合输入可能返回多个向量。</p>
                     */
                    std::vector<EmbeddingObject> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>输入 Token 数，多模态场景含图像、视频折算的 Token。</p>
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>总 Token 数。</p>
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERATEVLEMBEDDINGRESPONSE_H_
