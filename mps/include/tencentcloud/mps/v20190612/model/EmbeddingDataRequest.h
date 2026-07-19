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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EmbeddingData.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * EmbeddingData请求参数结构体
                */
                class EmbeddingDataRequest : public AbstractModel
                {
                public:
                    EmbeddingDataRequest();
                    ~EmbeddingDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>embedding 的模型，现在只支持 text_embedding_v1</p><p>枚举值：</p><ul><li>text_embedding_v1： 文本embedding的模型，可以填写Prompt</li></ul>
                     * @return Model <p>embedding 的模型，现在只支持 text_embedding_v1</p><p>枚举值：</p><ul><li>text_embedding_v1： 文本embedding的模型，可以填写Prompt</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>embedding 的模型，现在只支持 text_embedding_v1</p><p>枚举值：</p><ul><li>text_embedding_v1： 文本embedding的模型，可以填写Prompt</li></ul>
                     * @param _model <p>embedding 的模型，现在只支持 text_embedding_v1</p><p>枚举值：</p><ul><li>text_embedding_v1： 文本embedding的模型，可以填写Prompt</li></ul>
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
                     * 获取<p>embedding的输入</p>
                     * @return Files <p>embedding的输入</p>
                     * 
                     */
                    std::vector<EmbeddingData> GetFiles() const;

                    /**
                     * 设置<p>embedding的输入</p>
                     * @param _files <p>embedding的输入</p>
                     * 
                     */
                    void SetFiles(const std::vector<EmbeddingData>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取<p>embedding 的输入prompt</p>
                     * @return Prompt <p>embedding 的输入prompt</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>embedding 的输入prompt</p>
                     * @param _prompt <p>embedding 的输入prompt</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * <p>embedding 的模型，现在只支持 text_embedding_v1</p><p>枚举值：</p><ul><li>text_embedding_v1： 文本embedding的模型，可以填写Prompt</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>embedding的输入</p>
                     */
                    std::vector<EmbeddingData> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * <p>embedding 的输入prompt</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATAREQUEST_H_
