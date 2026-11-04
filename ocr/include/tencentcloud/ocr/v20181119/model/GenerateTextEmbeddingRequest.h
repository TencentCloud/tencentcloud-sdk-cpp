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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERATETEXTEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERATETEXTEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GenerateTextEmbedding请求参数结构体
                */
                class GenerateTextEmbeddingRequest : public AbstractModel
                {
                public:
                    GenerateTextEmbeddingRequest();
                    ~GenerateTextEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>选择生成向量的模型（不同模型计费单价不同）。取值：</p><ul><li>0：text-embedding-0.6b</li><li>1：text-embedding-4b</li></ul>
                     * @return Model <p>选择生成向量的模型（不同模型计费单价不同）。取值：</p><ul><li>0：text-embedding-0.6b</li><li>1：text-embedding-4b</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>选择生成向量的模型（不同模型计费单价不同）。取值：</p><ul><li>0：text-embedding-0.6b</li><li>1：text-embedding-4b</li></ul>
                     * @param _model <p>选择生成向量的模型（不同模型计费单价不同）。取值：</p><ul><li>0：text-embedding-0.6b</li><li>1：text-embedding-4b</li></ul>
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
                     * 获取<p>输入文本列表。单次最多 7 条，单条不超过 2000 字符。</p>
                     * @return Inputs <p>输入文本列表。单次最多 7 条，单条不超过 2000 字符。</p>
                     * 
                     */
                    std::vector<std::string> GetInputs() const;

                    /**
                     * 设置<p>输入文本列表。单次最多 7 条，单条不超过 2000 字符。</p>
                     * @param _inputs <p>输入文本列表。单次最多 7 条，单条不超过 2000 字符。</p>
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
                     * 获取<p>文本向量化类型。取值：</p><ul><li>query：查询文本，用于检索场景的查询侧</li><li>document：文档文本，用于检索场景的文档侧</li></ul><p>默认为 document</p>
                     * @return TextType <p>文本向量化类型。取值：</p><ul><li>query：查询文本，用于检索场景的查询侧</li><li>document：文档文本，用于检索场景的文档侧</li></ul><p>默认为 document</p>
                     * 
                     */
                    std::string GetTextType() const;

                    /**
                     * 设置<p>文本向量化类型。取值：</p><ul><li>query：查询文本，用于检索场景的查询侧</li><li>document：文档文本，用于检索场景的文档侧</li></ul><p>默认为 document</p>
                     * @param _textType <p>文本向量化类型。取值：</p><ul><li>query：查询文本，用于检索场景的查询侧</li><li>document：文档文本，用于检索场景的文档侧</li></ul><p>默认为 document</p>
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
                     * 获取<p>自定义任务指令词，用于指定向量化任务。最大 2000 字符。不传时按 TextType 使用系统默认指令词。</p>
                     * @return Instruction <p>自定义任务指令词，用于指定向量化任务。最大 2000 字符。不传时按 TextType 使用系统默认指令词。</p>
                     * 
                     */
                    std::string GetInstruction() const;

                    /**
                     * 设置<p>自定义任务指令词，用于指定向量化任务。最大 2000 字符。不传时按 TextType 使用系统默认指令词。</p>
                     * @param _instruction <p>自定义任务指令词，用于指定向量化任务。最大 2000 字符。不传时按 TextType 使用系统默认指令词。</p>
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
                     * <p>选择生成向量的模型（不同模型计费单价不同）。取值：</p><ul><li>0：text-embedding-0.6b</li><li>1：text-embedding-4b</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>输入文本列表。单次最多 7 条，单条不超过 2000 字符。</p>
                     */
                    std::vector<std::string> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * <p>文本向量化类型。取值：</p><ul><li>query：查询文本，用于检索场景的查询侧</li><li>document：文档文本，用于检索场景的文档侧</li></ul><p>默认为 document</p>
                     */
                    std::string m_textType;
                    bool m_textTypeHasBeenSet;

                    /**
                     * <p>自定义任务指令词，用于指定向量化任务。最大 2000 字符。不传时按 TextType 使用系统默认指令词。</p>
                     */
                    std::string m_instruction;
                    bool m_instructionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERATETEXTEMBEDDINGREQUEST_H_
