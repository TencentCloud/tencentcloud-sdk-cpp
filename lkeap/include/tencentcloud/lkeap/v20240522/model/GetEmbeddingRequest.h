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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * GetEmbedding请求参数结构体
                */
                class GetEmbeddingRequest : public AbstractModel
                {
                public:
                    GetEmbeddingRequest();
                    ~GetEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>说明：选择生成向量的模型</p><p>枚举值：</p><ul><li>lke-text-embedding-v1： 文本embedding v1</li><li>lke-text-embedding-v2： 文本embedding v2</li></ul>
                     * @return Model <p>说明：选择生成向量的模型</p><p>枚举值：</p><ul><li>lke-text-embedding-v1： 文本embedding v1</li><li>lke-text-embedding-v2： 文本embedding v2</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>说明：选择生成向量的模型</p><p>枚举值：</p><ul><li>lke-text-embedding-v1： 文本embedding v1</li><li>lke-text-embedding-v2： 文本embedding v2</li></ul>
                     * @param _model <p>说明：选择生成向量的模型</p><p>枚举值：</p><ul><li>lke-text-embedding-v1： 文本embedding v1</li><li>lke-text-embedding-v2： 文本embedding v2</li></ul>
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
                     * 获取<p>说明：需要 embedding 的文本<br>备注：单条query最多2000个字符，总条数最多7条</p>
                     * @return Inputs <p>说明：需要 embedding 的文本<br>备注：单条query最多2000个字符，总条数最多7条</p>
                     * 
                     */
                    std::vector<std::string> GetInputs() const;

                    /**
                     * 设置<p>说明：需要 embedding 的文本<br>备注：单条query最多2000个字符，总条数最多7条</p>
                     * @param _inputs <p>说明：需要 embedding 的文本<br>备注：单条query最多2000个字符，总条数最多7条</p>
                     * 
                     */
                    void SetInputs(const std::vector<std::string>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取<p>说明：文本向量化的类型，为使得检索任务有更好的检索效果，建议区分查询文本（query）和文档文本（document）类型, 聚类、分类等对称任务可以不用特殊指定，采用系统默认值document即可。</p>
                     * @return TextType <p>说明：文本向量化的类型，为使得检索任务有更好的检索效果，建议区分查询文本（query）和文档文本（document）类型, 聚类、分类等对称任务可以不用特殊指定，采用系统默认值document即可。</p>
                     * 
                     */
                    std::string GetTextType() const;

                    /**
                     * 设置<p>说明：文本向量化的类型，为使得检索任务有更好的检索效果，建议区分查询文本（query）和文档文本（document）类型, 聚类、分类等对称任务可以不用特殊指定，采用系统默认值document即可。</p>
                     * @param _textType <p>说明：文本向量化的类型，为使得检索任务有更好的检索效果，建议区分查询文本（query）和文档文本（document）类型, 聚类、分类等对称任务可以不用特殊指定，采用系统默认值document即可。</p>
                     * 
                     */
                    void SetTextType(const std::string& _textType);

                    /**
                     * 判断参数 TextType 是否已赋值
                     * @return TextType 是否已赋值
                     * 
                     */
                    bool TextTypeHasBeenSet() const;

                    /**
                     * 获取<p>说明：自定义任务指令词，当且仅当TextType=query且Model为lke-text-embedding-v1时，生效</p>
                     * @return Instruction <p>说明：自定义任务指令词，当且仅当TextType=query且Model为lke-text-embedding-v1时，生效</p>
                     * 
                     */
                    std::string GetInstruction() const;

                    /**
                     * 设置<p>说明：自定义任务指令词，当且仅当TextType=query且Model为lke-text-embedding-v1时，生效</p>
                     * @param _instruction <p>说明：自定义任务指令词，当且仅当TextType=query且Model为lke-text-embedding-v1时，生效</p>
                     * 
                     */
                    void SetInstruction(const std::string& _instruction);

                    /**
                     * 判断参数 Instruction 是否已赋值
                     * @return Instruction 是否已赋值
                     * 
                     */
                    bool InstructionHasBeenSet() const;

                private:

                    /**
                     * <p>说明：选择生成向量的模型</p><p>枚举值：</p><ul><li>lke-text-embedding-v1： 文本embedding v1</li><li>lke-text-embedding-v2： 文本embedding v2</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>说明：需要 embedding 的文本<br>备注：单条query最多2000个字符，总条数最多7条</p>
                     */
                    std::vector<std::string> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * <p>说明：文本向量化的类型，为使得检索任务有更好的检索效果，建议区分查询文本（query）和文档文本（document）类型, 聚类、分类等对称任务可以不用特殊指定，采用系统默认值document即可。</p>
                     */
                    std::string m_textType;
                    bool m_textTypeHasBeenSet;

                    /**
                     * <p>说明：自定义任务指令词，当且仅当TextType=query且Model为lke-text-embedding-v1时，生效</p>
                     */
                    std::string m_instruction;
                    bool m_instructionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_
